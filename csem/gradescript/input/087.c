/*
 * Goto Test 8
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, dogoto, doifelse, exprs, fhead, fname,
 *     ftail, id, labeldcl, m, n, op1, rel, set, string
 */

main() {
	int a, b;
	goto test2;
	test1:
		a -= 1;
		if (a == 0)
			goto final;
		else
			goto test1;
	
	test2:
		a = 10;
		goto test1;

	final:
		printf("%d %d\n", a, b);
}
