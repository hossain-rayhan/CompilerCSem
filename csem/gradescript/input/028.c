/* 
 * If Statements Test w/ CCAND
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, ccand, con, doif, exprs, fhead, fname, ftail,
 *     id, m, op1, rel, set, string
 */

main() {
	int a, b, c;
	a = 2;
	b = 3;
	c = 2;

	if (a == b && a == c) {
		printf("a, b, and c match (%d)!\n", a);
	}
}
