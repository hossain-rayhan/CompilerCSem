/*
 * Goto Test 9
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, dogoto, doif, doret, exprs, fhead, fname,
 *     ftail, id, labeldcl, m, op1, rel, set, string
 */

magic() {
	int a, b;
	a = 0;
	test1:
		printf("test1\n");
		a += 1;
		if (a == 10)
			goto final;
		b = a;
		goto test2;

	test2:
		printf("B: %d\n", b);
		b -= 1;
		if (b == 0)
			goto test1;
		goto test2;

	final:
		return;
}

main() {
	magic();
}
