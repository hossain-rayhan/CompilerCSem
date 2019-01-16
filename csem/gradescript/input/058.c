/*
 * Do-While-Loop Break/Continue Test
 *
 * Required Functions:
 *     backpatch, bgnstmt, con, dobreak, docontinue, dodo, doif, endloopscope,
 *     fhead, fname, ftail, id, indx, m, n, op1, rel, set, startloopscope
 */

int a[24];

main() {
	int i;
	i = 0;
	do {
		if (i >= 24)
			continue;
		a[i] = 0;
		i += 1;
		break;
	}
	while (i < 100);
}
