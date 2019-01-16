/*
 * All Arithmetic Test 2
 *
 * Required Functions:
 *     bgnstmt, call, con, exprs, fhead, fname, ftail, id, op1, op2, opb, set,
 *     string
 *
 * Hint:
 *     Make sure you pass the first 90 test cases. This is to ensure that your
 *     csem can handle all sorts of cases (just like cexpr). Since the yacc
 *     syntax has been written for you, you should pass the script unless you
 *     messed up your sem_recs.
 */

main() {
	int a, b, c;
	a = 123;
	b = 42;
	c = 666;

	printf("%d\n", a + b - c);
	printf("%d\n", a + b & c);
	printf("%d\n", a & b - c);
	printf("%d\n", a & b | c);
	printf("%d\n", a & (b | c) | a);
}
