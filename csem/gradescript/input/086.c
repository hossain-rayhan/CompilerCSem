/*
 * Goto Test 7
 *
 * Required Functions:
 *     bgnstmt, call, con, dogoto, exprs, fhead, fname, ftail, id, labeldcl,
 *     op1, set, string
 */

main() {
	int a, b;
	test1:
		a += 1;
		goto test2;
	test2:
		b += 1;
		goto test1;
	
	printf("%d %d\n", a, b);
}
