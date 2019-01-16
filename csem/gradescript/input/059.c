/*
 * Loop Break/Continue Test (Brutal)
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, dodo, dofor, dowhile, endloopscope,
 *     exprs, fhead, fname, ftail, id, indx, m, n, op1, op2, rel, set,
 *     startloopscope, string
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
	int i, j, w, x, ii;
	i = 0;
	j = 0;
	w = 0;
	x = 1;
	ii = 0;
	do {
		a[i] = x;
		i += 1;
		for (j = 0; j < a[i - 1]; j += 1) {
			w += 1;
			while (w > 50) {
				x += 1;
				w -= 4;
			}
			printf("%8d - %d * %d = %d\n", ii, w, x, w * x);
			ii += 1;
		}
	}
	while (i < 100);
}
