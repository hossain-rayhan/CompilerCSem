/*
 * Ultimate Goto Test (Brutal)
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, dogoto, doif, doret, exprs, fhead, fname,
 *     ftail, id, labeldcl, m, op1, op2, rel, set, string
 *
 * Hint:
 *     This one should auto-pass if you got 080-088.c to pass. However, it may
 *     be a bit tricky because of how the function parametre work. Make sure
 *     that you implemented your function calling right, or you may not stand a
 *     chance.
 *
 *     It's written specifically to be guaranteed to pass if you have your
 *     functions coded properly and passed 080-088.c.
 */

magic1(int start, int limit) {
	int a, b;
	a = start;
	test1a:
		printf("test1\n");
		a += 1;
		if (a == limit)
			goto finala;
		b = a;
		goto test2a;

	test2a:
		printf("B: %d\n", b);
		b -= 1;
		if (b == 0)
			goto test1a;
		goto test2a;

	finala:
		return (limit - start) * a;
}

magic2(int total, int limit) {
	int variance;
	printf("Total: %d\n", total);

	test1b:
		variance = rand() % (limit * (total + 1));
		if (variance > total * limit)
			goto finalb;
		goto test1b;

	finalb:
		return variance;

}

main() {
	magic1(1, 42);
}
