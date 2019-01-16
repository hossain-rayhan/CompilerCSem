/* 
 * If Statements Test 4
 *
 * Required Functions:
 *     backpatch, bgnstmt, con, doifelse, fhead, fname, ftail, id, indx, m, n,
 *     op1, rel, set
 */

int i[4];

main() {
	int index;
	index = 2;

	/* Set up array elements */
	i[0] = 2;
	i[1] = 3;
	i[2] = 4;
	i[3] = 5;

	/* Do cool check */
	if (i[0] == index) {
		i[1] = -1;
		i[2] = -2;
	}
	else
	if (i[0] != index) {
		i[0] = index;
	}
	else {
		/* But wait, because here comes the fun part */
		i[3] = 2;
	}
}
