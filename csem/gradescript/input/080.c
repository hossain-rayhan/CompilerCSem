/*
 * Goto Test 1
 *
 * Required Functions:
 *     bgnstmt, con, dogoto, fhead, fname, ftail, id, labeldcl, set
 */

main() {
	int a;
	test1:
		a = 0;
		goto test2;

	test2:
		a = 1;
}
