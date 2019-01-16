/*
 * All Arithmetic Test w/ Loops 1
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, dofor, endloopscope, exprs, fhead,
 *     fname, ftail, id, m, n, op1, op2, opb, rel, set, startloopscope, string
 *
 * Hint:
 *     Make sure you pass the first 90 test cases. This is to ensure that your
 *     csem can handle all sorts of cases (just like cexpr). Since the yacc
 *     syntax has been written for you, you should pass the script unless you
 *     messed up your sem_recs.
 */

main() {
	int a, b, c, i, j;
	a = 123;
	b = 42;
	c = 666;

	for (j = 0; j < 10; j += 1) {
		for (i = 0; i < 10; i += 1) {
			printf("%d\n", a & b | ~c * i * ~j);
			printf("%d\n", a + ~b & c * a | b / ~j);
			printf("%d\n", a & b - c + i * ~b);
			printf("%d\n", ~a & b ^ c / ~j * ~i);
			printf("%d\n", ~a ^ (~b | c) | ~a * i);
		}
	}
}
