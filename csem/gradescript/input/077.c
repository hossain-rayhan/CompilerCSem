/*
 * Binary Operations Test 1 w/ NOT (Multiple)
 *
 * Required Functions:
 *     bgnstmt, con, fhead, fname, ftail, id, op1, op2, set
 */

main() {
	int a, b;
	a = 1;
	b = 2;
	a + ~b;
	b + ~a;
	a + ~b + ~b;
}
