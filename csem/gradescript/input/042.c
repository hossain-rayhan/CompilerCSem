/*
 * For Loop Test 3
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, dofor, endloopscope, exprs, fhead, fname,
 *     ftail, id, m, n, op1, op2, rel, set, startloopscope, string
 *
 * Hint:
 *     If you passed 041.c, you should auto-pass this one. It just ensures that
 *     you truly have nested loop support.
 */

main() {
	int i, j, k;
	for (i = 0; i < 10; i += 1) {

		/* Nested Lists... a lot of them :) */
		for (j = 0; j < 10; j += 1) {
			printf("%d, %d\n", i, j);
		}

		/* Additon */
		for (j = 0; j < 10; j += 1) {
			printf("%d + %d = %d\n", i, j, i + j);
		}

		/* Multiplication */
		for (j = 0; j < 10; j += 1) {
			printf("%d + %d = %d\n", i, j, i + j);
		}

		/* O(N^3) stuff */
		for (j = 0; j < 10; j += 1) {
			/* Execute ARMv8's "madd" instruction */
			for (k = 0; k < j; k += 1) {
				printf("%d * %d + %d = %d\n", i, j, k, i * j + k);
			}
		}
	}
}

