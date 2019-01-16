/* 
 * If Statements Test 1
 *
 * Required Functions:
 *     backpatch, bgnstmt, con, doif, fhead, fname, ftail, id, indx, m, op1,
 *     rel, set
 */

int i[8];

main() {
	int index;
	index = 2;
	i[0] = 2;

	if (i[0] == index)
		i[1] = 3;
}
