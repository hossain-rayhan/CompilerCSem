/*
 * For-Loop Break/Continue Test (Multiple)
 *
 * Required Functions:
 *     backpatch, bgnstmt, con, dobreak, docontinue, dofor, doif, endloopscope,
 *     fhead, fname, ftail, id, indx, m, n, op1, rel, set, startloopscope
 */

int a[24];

main() {
	int i;
	for (i = 0; i < 100; i += 1) {
		if (i >= 24)
			continue;
		a[i] = 0;
		break;
	}

	for (i = 0; i < 100; i += 1) {
		if (i >= 24)
			continue;
		a[i] = 0;
		break;
	}

	for (i = 0; i < 100; i += 1) {
		if (i >= 24)
			continue;
		a[i] = 0;
		break;
	}
}
