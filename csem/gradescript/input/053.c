/*
 * While-Loop Break Test
 *
 * Required Functions:
 *     backpatch, bgnstmt, con, dobreak, doif, dowhile, endloopscope, fhead,
 *     fname, ftail, id, indx, m, n, op1, rel, set, startloopscope
 */

int a[24];

main() {
	int i;
	i = 0;
	while (i < 100) {
		if (i >= 24)
			break;
		a[i] = 0;
		i += 1;
	}
}
