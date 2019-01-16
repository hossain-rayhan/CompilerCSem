/* 
 * If Statements Test of all operations (2/2)
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, ccand, ccexpr, ccnot, ccor, con, doifelse,
 *     exprs, fhead, fname, ftail, id, indx, m, n, op1, op2, rel, set, string
 *
 * Hint:
 *     This test was specifically written to auto-pass if you have properly
 *     written all of the "cc" functions. So if you pass test cases 026.c-033.c
 *     then you should auto-pass this one. If not, there's something wrong with
 *     your sem_recs.
 */

int i[4];
int j[8];

main() {
	/* Some local variables */
	int a, b;

	/* Some Variable assignment nonsense */
	i[0] = 2;
	i[3] = i[0] * 2;
	i[2] = i[3] * i[0];
	i[1] = i[0] + 1;

	a = i[0] + i[1] + i[2] + i[3];
	b = i[0] * i[1] * i[2] * i[3];
	
	/* The real deal */
	if (a == b) {
		printf("a == b (%d)! Therefore, all of \"i\" must be 1!\n", a);
	}
	else
	if (a < b && !i[0] || i[0]) {
		printf("a is less than b (%d < %d), but something weird is going on...\n", a, b);
	}
	else {
		if (i[0] == 2) {
			printf("no\n");
		}
		else {
			printf("yes\n");
		}
	}
}
