/* 
 * If Statements Test 3
 *
 * Required Functions:
 *     backpatch, bgnstmt, con, doifelse, fhead, fname, ftail, id, indx, m, n,
 *     op1, rel, set
 */

int i[8];

main() {
	int index;
	index = 2;

	/* Set up array elements */
	i[0] = 2;
	i[1] = 3;
	i[2] = 4;
	i[3] = 5;
	i[4] = 6;
	i[5] = 7;
	i[6] = 8;
	i[7] = 9;

	/* Do cool check */
	if (i[0] == index) {
		i[1] = -1;
		i[2] = -2;
	}
	else {
		/* But wait, because here comes the fun part */
		i[7] = 2;
	}
}
