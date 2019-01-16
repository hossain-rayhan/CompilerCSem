/*
 * If Statements Test 6
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, doifelse, exprs, fhead, fname, ftail, id,
 *     m, n, op1, rel, set, string
 */

main() {
	int a, b;
	a = 2;
	b = 3;

	if (a == b) {
		printf("a and b match (%d)!\n", a);
	}
	else {
		printf("a and b don't match (%d != %d)!\n", a, b);
	}
}
