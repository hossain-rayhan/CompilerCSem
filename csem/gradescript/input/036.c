/*
 * Functions Test 2
 *
 * Required Functions:
 *     bgnstmt, call, con, doret, exprs, fhead, fname, ftail, id, op1, op2, set
 */

add(int a, int b) {
	return a + b;
}

sub(int a, int b) {
	return a - b;
}

main() {
	int c;
	c = add(2, 2); /* Should be 5 */
	c = sub(1, 2);
}
