/*
 * For-Loop Break Test (Multiple)
 *
 * Required Functions:
 *     backpatch, bgnstmt, con, dobreak, dofor, doif, endloopscope, fhead,
 *     fname, ftail, id, indx, m, n, op1, rel, set, startloopscope
 */

int a[24];

main() {
	int i;
	for (i = 0; i < 100; i += 1) {
		if (i >= 24)
			break;
		a[i] = 0;
	}

	for (i = 0; i < 100; i += 1) {
		if (i >= 24)
			break;
		a[i] = 0;
	}

	for (i = 0; i < 100; i += 1) {
		if (i >= 24)
			break;
		a[i] = 0;
	}
}
