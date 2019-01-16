# include <stdio.h>
#include<stdlib.h>
#include<string.h>
# include "cc.h"
# include "semutil.h"
# include "sem.h"
# include "sym.h"

#define MAXARGS 50
#define MAXLOCS 50

extern int formalnum;
extern int localnum;
extern char formaltypes[MAXARGS];
extern char localtypes[MAXLOCS];
int localwidths[MAXLOCS];
int label_counter=0;
int branch_counter=0;
struct sem_rec *arg_start;

struct sem_rec *immediate_start;
struct sem_rec *immediate_end;

int for_continue = 0;
int for_break = 0;
/*
 * backpatch - backpatch list of quadruples starting at p with k
 */
void backpatch(struct sem_rec *p, int k)
{
	while(p != NULL){
		printf("B%d=L%d\n", p->s_place, k);
		p = p->back.s_link;
	}
}

/*
 * bgnstmt - encountered the beginning of a statement
 */
void bgnstmt()
{
   int c;
   extern int lineno;
   static int laststmt = 0;

   skip();
   c = getchar();
   putbak(c);
   if (c != '}' && lineno != laststmt) {
      printf("bgnstmt %d\n", lineno);
      laststmt = lineno;
   }
}

/*
 * call - procedure invocation
 */
struct sem_rec *call(char *f, struct sem_rec *args)
{

	int counter = 0;
	while(args != NULL){

		if(args->s_mode == T_INT){
			printf("argi t%d\n", args->s_place);
		}else if(args->s_mode == T_DOUBLE){
			printf("argf t%d\n", args->s_place);
		}
		counter++;
		args = args->back.s_link;
	}		

	printf("t%d := global %s\n", nexttemp(), f);

	struct id_entry *funcdcl = (struct id_entry *) malloc(sizeof(struct id_entry));
	funcdcl = lookup(f, 0);
	if(funcdcl != NULL){
		if(funcdcl->i_type == T_DOUBLE){
			printf("t%d := ff t%d %d\n", nexttemp(), currtemp(), counter);
		}else{
			printf("t%d := fi t%d %d\n", nexttemp(), currtemp(), counter);
		}
	}else{
		printf("t%d := fi t%d %d\n", nexttemp(), currtemp(), counter);
	}
	
	
	

	struct sem_rec * result  = (struct sem_rec *) malloc(sizeof(struct sem_rec)); 
	result->s_place = currtemp();

   return ((struct sem_rec *) result);
}

/*
 * ccand - logical and
 */
struct sem_rec *ccand(struct sem_rec *e1, int m, struct sem_rec *e2)
{

	//printf("e1 = %d, e2 = %d\n", e1->s_place, e2->s_place);
	backpatch(e1, m);
	
	struct sem_rec *and_link = (struct sem_rec *) malloc(sizeof(struct sem_rec));
		and_link = merge(e1, e2);

		e2->back.s_link = NULL;
		e1->s_false->back.s_link = e2->s_false;

	struct sem_rec *new = (struct sem_rec *) malloc(sizeof(struct sem_rec));
	new = and_link->back.s_link;
	new->s_false = and_link->s_false;
	return new;
	
}

/*
 * ccexpr - convert arithmetic expression to logical expression
 */
struct sem_rec *ccexpr(struct sem_rec *e)
{
   return ((struct sem_rec *) e);
}

/*
 * ccnot - logical not
 */
struct sem_rec *ccnot(struct sem_rec *e)
{
	printf("t%d := 0\n", nexttemp());
	printf("t%d := t%d !=i t%d\n", nexttemp(), e->s_place, currtemp());

	int b_true = ++branch_counter;
	int b_false = ++branch_counter;

	printf("bt t%d B%d\n", currtemp(), b_true);
	printf("br B%d\n", b_false);	

	struct sem_rec * branch_false  = (struct sem_rec *) malloc(sizeof(struct sem_rec)); 
	branch_false-> s_place = b_true;

	struct sem_rec *ccnot_node = node(b_false, T_LBL, NULL, branch_false);

       
   return ((struct sem_rec *) ccnot_node);
}

/*
 * ccor - logical or
 */
struct sem_rec *ccor(struct sem_rec *e1, int m, struct sem_rec *e2)
{
	//printf("e1 = %d, e2 = %d\n", e1->s_false->s_place, e2->s_place);

	backpatch(e1->s_false, m);
	
	struct sem_rec *or_link = (struct sem_rec *) malloc(sizeof(struct sem_rec));
		or_link = merge(e1, e2);
		e2->back.s_link = NULL;

		or_link->back.s_true = e1->back.s_link;
		or_link->s_false = e2->s_false;

	return or_link;
}

/*
 * con - constant reference in an expression
 */
struct sem_rec *con(char *x)
{

	int next_temp = nexttemp();

	printf("t%d := %s\n", next_temp, x);

	struct sem_rec *sem_record = (struct sem_rec *) malloc(sizeof(struct sem_rec));
	sem_record->s_place = next_temp;
	sem_record->s_mode = T_INT;

	return sem_record;

}

/*
 * dobreak - break statement
 */
void dobreak()
{
   	printf("br B%d\n", ++branch_counter);

	struct sem_rec *temp_rec = (struct sem_rec *) malloc(sizeof(struct sem_rec));
   	temp_rec->s_place = branch_counter;

	immediate_end = merge(immediate_end, temp_rec) ;
   	for_break = 1;
}

/*
 * docontinue - continue statement
 */
void docontinue()
{
   printf("br B%d\n", ++branch_counter);

   struct sem_rec *temp_rec = (struct sem_rec *) malloc(sizeof(struct sem_rec));
   temp_rec->s_place = branch_counter;

	immediate_start = merge(immediate_start, temp_rec) ;
   	for_continue = 1;
}

/*
 * dodo - do statement
 */
void dodo(int m1, int m2, struct sem_rec *e, int m3)
{
   	//printf("m1 = %d, m2= %d, m3= %d\n", m1, m2, m3);

	backpatch(e,m1);
	backpatch(e->s_false,m3);

	// continue..... goto m2
	if(for_continue == 1){
		backpatch(immediate_start, m2);
		for_continue = 0;
		immediate_start = NULL;
	}


	// break..... goto m3
	
	if(for_break == 1){
		backpatch(immediate_end, m3);
		for_break = 0;
		immediate_end = NULL;
	}
}

/*
 * dofor - for statement
 */
void dofor(int m1, struct sem_rec *e2, int m2, struct sem_rec *n1, int m3, struct sem_rec *n2, int m4)
{
	//printf("%d %d %d %d \n ", m1, m2, m3, m4);
	//printf("%d %d %d \n", e2->s_place, n1->s_place, n2->s_place);

	backpatch(e2,m3);
	backpatch(e2->s_false,m4);
		
	// continue..... goto m2
	if(for_continue == 1){
		backpatch(immediate_start, m2);
		for_continue = 0;
		immediate_start = NULL;
	}



	backpatch(n1,m1);
	backpatch(n2,m2);

	

	// break..... goto m4
	
	if(for_break == 1){
		backpatch(immediate_end, m4);
		for_break = 0;
		immediate_end = NULL;
	}

}

/*
 * dogoto - goto statement
 */
void dogoto(char *id)
{
	int bc = ++branch_counter;
   	printf("br B%d\n", bc);

	struct sem_rec * node_goto  = (struct sem_rec *) malloc(sizeof(struct sem_rec)); 
	node_goto->s_place = branch_counter;

	//backpatch(node_goto, 1);


}

/*
 * doif - one-arm if statement
 */
void doif(struct sem_rec *e, int m1, int m2)
{
	backpatch(e, m1);
	backpatch(e->s_false, m2);	

}


/*
 * doifelse - if then else statement
 */
void doifelse(struct sem_rec *e, int m1, struct sem_rec *n,int m2, int m3)
{
	//printf("m1 = %d, m2 = %d, m3 = %d\n", m1, m2, m3);
	//printf("e = %d\n", e->s_place);
	//printf("n = %d\n", n->s_place);

	backpatch(e, m1);
	backpatch(e->s_false, m2);
	backpatch(n, m3);
}

/*
 * doret - return statement
 */
void doret(struct sem_rec *e)
{
	if(e->s_mode == T_DOUBLE){
		//printf("t%d := cvi t%d\n", nexttemp(), e->s_place);
		printf("retf t%d\n", currtemp());
	}else{
		printf("reti t%d\n", e->s_place);
	}

}

/*
 * dowhile - while statement
 */
void dowhile(int m1, struct sem_rec *e, int m2, struct sem_rec *n,int m3)
{
   backpatch(e, m2);
   backpatch(e->s_false, m3);
   backpatch(n, m1);

	// continue..... goto m1
	if(for_continue == 1){
		backpatch(immediate_start, m1);
		for_continue = 0;
		immediate_start = NULL;
	}


	// break..... goto m3
	
	if(for_break == 1){
		backpatch(immediate_end, m3);
		for_break = 0;
		immediate_end = NULL;
	}
}

/*
 * endloopscope - end the scope for a loop
 */
void endloopscope(int m)
{
   leaveblock();
}

/*
 * exprs - form a list of expressions
 */
struct sem_rec *exprs(struct sem_rec *l, struct sem_rec *e)
{		
	struct sem_rec *exprs_arg = merge(l, e);
	
   	return ((struct sem_rec *) exprs_arg);
}

/*
 * fhead - beginning of function body
 */
void fhead(struct id_entry *p)
{
	int i;
	
	printf("func %s\n", p->i_name);
	for(i = 0; i < formalnum; i++){
		if(formaltypes[i] == 'f'){
			printf("formal 8\n");
		}else if(formaltypes[i] == 'i'){
			printf("formal 4\n");
		}else{
			yyerror("formal type somehow stored incorrectly");
		}
	}

	for(i = 0; i < localnum; i++){
		if(localtypes[i] == 'f'){
			printf("localloc %d\n", 8 * localwidths[i]);
		}else if(localtypes[i] == 'i'){
			printf("localloc %d\n", 4 * localwidths[i]);
		}else{
			yyerror("local type somehow stored incorrectly");		}
	}

}

/*
 * fname - function declaration
 */
struct id_entry *fname(int t, char *id)
{
	struct id_entry *p;

	if( (p = lookup(id, 0)) == NULL){
		p = install(id, 0);
	}else if(p->i_defined){
		yyerror("procedure previously declared");
	}else if(p->i_type != t){
		yyerror("Function declaration types do not match");
	}

	p->i_type = t;
	p->i_scope = GLOBAL;
	p->i_defined = 1;
	enterblock();
	formalnum = 0;
	localnum = 0;

	return p;

}

/*
 * ftail - end of function body
 */
void ftail()
{
	leaveblock();
	printf("fend\n");
}

/*
 * id - variable reference
 */
struct sem_rec *id(char *x)
{

	struct id_entry *p;
	if((p = lookup(x, 0)) == NULL){
		p = install(x, 0);
	}

	int next_temp = nexttemp();
	if(p->i_scope == 0){
		printf("t%d := %s %d\n", next_temp, "local", p->i_offset);
	}else if(p->i_scope == 1){
		printf("t%d := %s %d\n", next_temp, "param", p->i_offset);
	}else if(p->i_scope == 2){
		printf("t%d := %s %s\n", next_temp, "global", p->i_name);
	}
	
	struct sem_rec *sem_record = (struct sem_rec *) malloc(sizeof(struct sem_rec));
	sem_record->s_place = next_temp;
	sem_record->s_mode =  p->i_type;

	return sem_record;
}

/*
 * indx - subscript
 */
struct sem_rec *indx(struct sem_rec *x, struct sem_rec *i)
{
	if(x->s_mode == T_DOUBLE || x->s_mode == 20){
		printf("t%d := t%d []f t%d\n", nexttemp(), x->s_place, i->s_place);
		x->s_mode = T_DOUBLE;
	}else{
		printf("t%d := t%d []i t%d\n", nexttemp(), x->s_place, i->s_place);
		x->s_mode = T_INT;
	} 
	
	x->s_place = currtemp();
	return x;
}

/*
 * labeldcl - process a label declaration
 */
void labeldcl(char *id)
{
   	//printf("label %s\n", id);
   	printf("label L%d\n", ++label_counter);

	struct id_entry *p;

	if( (p = lookup(id, 0)) == NULL){
		p = install(id, 0);
	}

	p->i_type = label_counter;
}

/*
 * m - generate label and return next temporary number
 */
int m()
{
	printf("label L%d\n", ++label_counter);
	return label_counter;
}

/*
 * n - generate goto and return backpatch pointer
 */
struct sem_rec *n()
{

	int curr_branch = ++branch_counter;

	printf("br B%d\n", curr_branch);
	
	struct sem_rec *n_node = node(curr_branch, T_LBL, NULL, NULL);

   return ((struct sem_rec *) n_node);
}

/*
 * op1 - unary operators
 */
struct sem_rec *op1(char *op, struct sem_rec *y)
{

	int current_temp = currtemp();
	int next_temp = nexttemp();
	
	if(y->s_mode == T_INT){
		printf("t%d := %si t%d\n", next_temp, op, current_temp);
	}else if(y->s_mode == T_DOUBLE){
		printf("t%d := %sf t%d\n", next_temp, op, current_temp);
	}
	y->s_place = next_temp;
	return y;
}

/*
 * op2 - arithmetic operators
 */
struct sem_rec *op2(char *op, struct sem_rec *x, struct sem_rec *y)
{
	int convert = 0;
	struct sem_rec * result  = (struct sem_rec *) malloc(sizeof(struct sem_rec)); 

	if(x->s_mode == T_DOUBLE || y->s_mode == T_DOUBLE){
		if(x->s_mode == T_INT || x->s_mode == 17){
			printf("t%d := cvf t%d\n", nexttemp(), x->s_place);
			convert = 1;
		}

		if(y->s_mode == T_INT || y->s_mode == 17){
			printf("t%d := cvf t%d\n", nexttemp(), y->s_place);
			convert = 2;
		}

		if(convert == 0){
			printf("t%d := t%d %sf t%d\n", nexttemp(), x->s_place, op, y->s_place);
		}else if(convert == 1){
			printf("t%d := t%d %sf t%d\n", nexttemp(), currtemp(), op, y->s_place);
		}else if(convert == 2){
			printf("t%d := t%d %sf t%d\n", nexttemp(), x->s_place, op, currtemp());
		}
		result->s_mode = T_DOUBLE;
	}else{
		printf("t%d := t%d %si t%d\n", nexttemp(), x->s_place, op, y->s_place);
		result->s_mode = T_INT;
	}
	result->s_place = currtemp();
	return result;
}

/*
 * opb - bitwise operators
 */
struct sem_rec *opb(char *op, struct sem_rec *x, struct sem_rec *y)
{
        int next_temp = nexttemp();

	printf("t%d := t%d %si t%d\n", next_temp, x->s_place, op, y->s_place);
	
	y->s_place = next_temp;
	return y;
}

/*
 * rel - relational operators
 */
struct sem_rec *rel(char *op, struct sem_rec *x, struct sem_rec *y)
{
	int current_temp = currtemp();
	int next_temp = nexttemp();

	if(x->s_mode == T_DOUBLE){
		printf("t%d := cvf t%d\n", next_temp, current_temp);

		int current_temp_2 = currtemp();
		int next_temp_2 = nexttemp();

		printf("t%d := t%d %sf t%d\n", next_temp_2, x->s_place, op, next_temp);
	}else if(x->s_mode == T_INT){
		printf("t%d := t%d %si t%d\n", next_temp, x->s_place, op, current_temp);
	}

	int b_true = ++branch_counter;
	int b_false = ++branch_counter;

	printf("bt t%d B%d\n", currtemp(), b_true);
	printf("br B%d\n", b_false);	

	struct sem_rec * branch_false  = (struct sem_rec *) malloc(sizeof(struct sem_rec)); 
	branch_false-> s_place = b_false;

	struct sem_rec * branch_true  = (struct sem_rec *) malloc(sizeof(struct sem_rec)); 
	branch_true-> s_place = b_true;

	struct sem_rec *rel_node = node(b_true, T_LBL, NULL, branch_false);

	return ((struct sem_rec *) rel_node);
}

/*
 * set - assignment operators
 */
struct sem_rec *set(char *op, struct sem_rec *x, struct sem_rec *y)
{

	if(x->s_mode == T_DOUBLE || x->s_mode == 20){
		if(strlen(op) > 0){
			printf("t%d := @f t%d\n", nexttemp(), x->s_place);
			printf("t%d := t%d %sf t%d\n", nexttemp(), currtemp(), op, y->s_place);
		}	

		if(y->s_mode == T_INT || y->s_mode == 17){
			printf("t%d := cvf t%d\n", nexttemp(), currtemp());	
		}
		printf("t%d := t%d =f t%d\n", nexttemp(), x->s_place, currtemp());
	}else{
		if(strlen(op) > 0){
			printf("t%d := @i t%d\n", nexttemp(), x->s_place);
			printf("t%d := t%d %si t%d\n", nexttemp(), currtemp(), op, y->s_place);
		}
		if(y->s_mode == T_DOUBLE || y->s_mode == 20){
			printf("t%d := cvi t%d\n", nexttemp(), currtemp());
		}		
		printf("t%d := t%d =i t%d\n", nexttemp(), x->s_place, currtemp());
	}

	x->s_place = currtemp();
	return x;

}

/*
 * startloopscope - start the scope for a loop
 */
void startloopscope()
{
	enterblock();
}

/*
 * string - generate code for a string
 */
struct sem_rec *string(char *s)
{
	printf("t%d := ""%s""\n", nexttemp(), s);
	struct sem_rec *string_node = node(currtemp(), 1, NULL, NULL);

   return ((struct sem_rec *) string_node);
}
