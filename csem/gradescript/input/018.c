/*
 * Nested Function Calling Test 1
 *
 * Required Functions:
 *     bgnstmt, call, con, doret, exprs, fhead, fname, ftail, id, op1, op2,
 *     set, string
 */

double gl; /* Grenade Launcher */

cool(double x) {
	double gl;
	gl = x;
	return gl;
}

main() {
	int x;
	double y;
	x = 0;
	y = x + 1;
	y = gl(y);
	printf("%d %f\n", x + y, gl(y) + 2);
}
