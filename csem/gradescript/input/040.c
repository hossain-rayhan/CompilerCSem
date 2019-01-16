/*
 * For Loop Test 1
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, dofor, endloopscope, exprs, fhead, fname,
 *     ftail, id, m, n, op1, rel, set, startloopscope, string
 */

main() {
	int i, j;
	for (i = 0; i < 10; i += 1) {
		printf("%d\n", i);
	}
}
