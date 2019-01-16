/* 
 * If Statements Test w/ CCNOT and CCOR
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, ccexpr, ccnot, ccor, con, doif, exprs, fhead,
 *     fname, ftail, id, m, op1, rel, set, string
 */

main() {
	int a, b, c;
	a = 2;
	b = 3;
	c = 2;

	if (!a || b == c || a != c) {
		printf("a, b, and c match (%d)!\n", a);
	}
}
