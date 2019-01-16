/* 
 * If Statements Test w/ CCOR
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, ccor, con, doif, doifelse, exprs, fhead,
 *     fname, ftail, id, m, n, op1, rel, set, string
 */

main() {
	int a, b, c;
	a = 2;
	b = 3;
	c = 2;

	if (a == b || b == c) {
		if (a == b)
			printf("a and b match (%d)!\n", a);
		if (b == c)
			printf("b and c match (%d)!\n", b);
	}
	else
	if (a == c || c == a) {
		printf("a and b don't match, but a and c do! (%d)\n", a);
	}
	else {
		printf("These pathetic numbers never had a chance...\n");
	}
}
