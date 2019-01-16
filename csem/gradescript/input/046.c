/*
 * While Loop Test (Nested)
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, dowhile, endloopscope, exprs, fhead,
 *     fname, ftail, id, m, n, op1, rel, set, startloopscope, string
 *
 * Hint:
 *     Just support nested while loops... oh and also function calls.
 */

main() {
	int i, j, k;
	i = 0;
	j = 10;

	while (i < j) {
		i += 1;
		k = 0;
		while (k < i) {
			k += 1;
			printf("%d\n", k);
		}
	}
}
