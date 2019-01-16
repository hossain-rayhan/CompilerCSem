/*
 * While-Loop Continue Test (Multiple)
 *
 * Required Functions:
 *     backpatch, bgnstmt, con, docontinue, doif, dowhile, endloopscope, fhead,
 *     fname, ftail, id, indx, m, n, op1, rel, set, startloopscope
 */

int a[24];

main() {
	int i;
	i = 0;
	while (i < 100) {
		if (i >= 24)
			continue;
		a[i] = 0;
		i += 1;
	}

	i = 0;
	while (i < 100) {
		if (i >= 24)
			continue;
		a[i] = 0;
		i += 1;
	}

	i = 0;
	while (i < 100) {
		if (i >= 24)
			continue;
		a[i] = 0;
		i += 1;
	}
}
