/*
 * Array Indexing Test 3
 *
 * Required Functions:
 *     bgnstmt, con, fhead, fname, ftail, id, indx, op1, op2, set
 */

double i[8];

main() {
	int x[2];
	int y;
	x[0] = 8;
	x[1] = 13;
	y = 2;

	i[y] = x[0];
	i[y + 1] = x[1];
}
