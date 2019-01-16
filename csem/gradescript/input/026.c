/*
 * If Statements Test w/ CCOR
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, ccor, con, doif, exprs, fhead, fname, ftail,
 *     id, m, op1, rel, set, string
 */

main() {
	int a, b, c;
	a = 2;
	b = 3;
	c = 2;

	if (a == b || b == c) {
		printf("a and b match (%d)!\n", a);
	}
}
