/*
 * Goto Test 2
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
		a += 1;

		/* Loop Infinitely */
		goto test2;
}
