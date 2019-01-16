/*
 * Loop Break/Continue Test (Super Brutal)
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, dobreak, docontinue, dodo, dofor, doif,
 *     dowhile, endloopscope, exprs, fhead, fname, ftail, id, indx, m, n, op1,
 *     op2, rel, set, startloopscope, string
 *
 * Hint:
 *     Like the other XX9.c scripts, this one should auto-pass if you have done
 *     your break/continue functions correctly, as well as your loop functions.
 *     If you struggle on this test case, it is recommended to save it for last
 *     because of its complexity. However, passing 052.c, 055.c, and 058.c
 *     should guarantee that this test case passes.
 */

int a[24];

main() {
	int i, j, k, w, x;
	i = 0;
	j = 0;
	k = 0;
	w = 0;
	x = 1;
	do {
		if (i >= 240)
			continue;
		a[i] = x;
		i += 1;
		for (j = 0; j < a[i - 1]; j += 1) {
			for (k = j; k >= 0; k -= 1) {
				w += 1;
			}
			while (w > 50) {
				if (x > 1000)
					break;
				x += w;
				w -= 1;
				if (w <= 50)
					break;
			}
			printf("%d * %d = %d\n", w, x, w * x);
		}
		if (w > 100000)
			break;
	}
	while (i < 100);

	/* Print out final results */
	printf("\nFINAL:\n%d * %d = %d\n", w, x, w * x);
}
