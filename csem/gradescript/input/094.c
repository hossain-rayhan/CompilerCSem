/*
 * All Arithmetic Test w/ Loops 2 (Brutal)
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, dodo, dofor, doif, doret, endloopscope,
 *     exprs, fhead, fname, ftail, id, m, n, op1, op2, opb, rel, set,
 *     startloopscope, string
 *
 * Hint:
 *     Make sure you pass the first 90 test cases. This is to ensure that your
 *     csem can handle all sorts of cases (just like cexpr). Since the yacc
 *     syntax has been written for you, you should pass the script unless you
 *     messed up your sem_recs.
 */

magic(int a, int b, int c) {
	int i, j, r;

	r = 0;
	for (j = 0; j < 10; j += 1) {
		for (i = 0; i < 10; i += 1) {
			printf("%d\n",  a &   b | ~c  ^  i * ~j);
			printf("%d\n",  a +  ~b &  c  ^  a |  b / ~j);
			printf("%d\n",  a &   b -  c  +  i * ~b);
			printf("%d\n", ~a &   b ^  c  / ~j * ~i);
			printf("%d\n", ~a & (~b |  c) | ~a ^  i);

			r += (
				( a &   b | ~c  ^  i * ~j) +
				( a +  ~b &  c  ^  a |  b / ~j) +
				( a &   b -  c  +  i * ~b) +
				(~a &   b ^  c  / ~j * ~i) +
				(~a & (~b |  c) | ~a ^  i)
			);
		}
	}

	if (r < 0)
		return -r;
	return r;
}

main() {
	int ret, b, c;
	ret = 123;
	b = 42;
	c = 666;
	do {
		ret = magic(ret, b, c);
		b += 1;
		c += 2;

	}
	while (ret < 1000000);
}
