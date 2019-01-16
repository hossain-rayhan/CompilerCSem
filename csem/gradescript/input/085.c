/*
 * Goto Test 6
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, dogoto, doif, exprs, fhead, fname, ftail,
 *     id, labeldcl, m, op1, rel, set, string
 */

main() {
	int a;
	test1:
		a += 1;
		if (a < 10) {
			goto test1;
		}
	
	printf("%d\n", a);
}
