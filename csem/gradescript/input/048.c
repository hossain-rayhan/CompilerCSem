/*
 * Do-While Loop Tests (Nested)
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, dodo, endloopscope, fhead, fname, ftail,
 *     id, m, op1, op2, rel, set, startloopscope
 *
 * Hint:
 *     This one may not auto-pass just because you implemented your dodo(). But
 *     make sure your set is correct, and make sure nesting is supported. Then
 *     you should be fine.
 */

main() {
	int i, j, k;
	i = 0;
	j = 10;

	do {
		i += 1;
		do {
			i += j;
		}
		while (k < j);
	}
	while ((rand() % 20000) < 10000);
}
