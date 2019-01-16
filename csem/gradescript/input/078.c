/*
 * All Binary Operations Test 1
 *
 * Required Functions:
 *     bgnstmt, con, fhead, fname, ftail, id, op1, op2, opb, set
 */

main() {
	int a, b, c;
	a = 1;
	b = 2;
	c = 3;

	a += (~b | ~c) & (a ^ ~b);
	b += (~a | a) * (~b << 8);
	c += ((~c * ~c) | b & a >> 2) << 12;
}
