/* 
 * If Statements Test of all operations (1/2)
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, ccand, ccexpr, ccnot, ccor, con, doifelse,
 *     exprs, fhead, fname, ftail, id, indx, m, n, op1, op2, rel, set, string
 *
 * Hint:
 *     This test was specifically written to auto-pass if you have properly
 *     written all of the "cc" functions. So if you pass test cases 026.c-033.c
 *     then you should auto-pass this one. If not, there's something wrong with
 *     your sem_recs.
 */

int i[4];

main() {
	/* Some Variable assignment nonsense */
	i[0] = 2;
	i[3] = i[0] * 2;
	i[2] = i[3] * i[0];
	i[1] = i[0] + 1;
	
	/* The real deal */
	if (!i[0]) {
		if (i[1] == i[2]) {
			printf("yes\n");
		}
		else {
			if (i[2] == i[3] || i[0] == i[3] && i[0] == i[2]) {
				printf("lolwhat\n");
			}
			else {
				printf("no\n");
			}
		}
	}
	else
	if (!i[1]) {
		printf("i[1] (%d) is not 0!\n", i[1]);
	}
	else {
		printf("These pathetic numbers never had a chance...\n");
	}
}
