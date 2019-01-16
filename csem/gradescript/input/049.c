/*
 * Generic Various Loops Tests (Nested)
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, ccand, con, dodo, dofor, doifelse, doret,
 *     dowhile, endloopscope, exprs, fhead, fname, ftail, id, m, n, op1, op2,
 *     rel, set, startloopscope, string
 *
 * Hint:
 *     Make sure your sem_recs are passed correctly and that you are doing your
 *     backpatches correctly. This should work if you passed 040-048.c. If not,
 *     look at your backpatching and sem_rec pointers. Don't be intimidated by
 *     the complexity of the magic functions. It'll work if you manage your
 *     sem_recs correctly.
 *
 *     If you struggle on this, I'd recommend saving this test case for last,
 *     or at least make it one of the last ones you try to go for.
 */

magic1(int a, int b) {
	int c;
	for (; a < b; a += 1) {
		c = 0;
		do {
			c += 1; /* c++... No pun intended ;) */
			magic2(a, b);
		}
		while (c < b);
	}

	return c * a * b;
}

magic2(double a, double b) {
	int i, j, k, l, m;
	i = a;
	j = a * b;
	if (i == 0 && j != 0)
		k = j * j;
	else
	if (j == 0 && i != 0)
		k = i * i;
	else
		k = 100;
	l = k;

	do {
		j -= 1;
		while (k > 0) {
			k -= 1;
		}
		printf("%d\n", l - k + m);
		k = l;
		m += 1;
	}
	while (j > i);

	return m;
}

main() {
	int i, j, k;
	double l;
	i = 0;
	j = 10;
	l = 0;

	for (i = 0; i < j; i += 1) {
		magic1(i, j);
		magic2(i, j);
	}

	/* The ultimate test */
	for (i = 0; i < j; i += 1) {
		l += magic1(magic2(i, j), magic2(j, i));
		l += magic1(magic2(j, i), magic2(i, j));
		l *= magic1(magic2(i, i), magic2(j, j));
		l /= magic1(magic2(j, j), magic2(i, i));
	}

	/* Print out the result */
	printf("l is %d\n", l);
}
