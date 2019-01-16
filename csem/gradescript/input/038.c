/*
 * Functions Test 4
 *
 * Required Functions:
 *     bgnstmt, call, con, doret, exprs, fhead, fname, ftail, id, op1, op2, set
 */

add(int a, int b) {
	return a + b;
}

sub(int a, int b) {
	return a - b;
}

/* A game changer */
double fmul(double a, double b) {
	return a * b;
}

imul(double a, double b) {
	return a * b;
}

main() {
	int ca, cb, cc;
	double d;       /* Edd ;) */
	ca = add(2, 2); /* Should be 5 */
	cb = sub(1, 2);

	d  = fmul(ca, cb);
	cc = imul(ca, cb);

	/* Also check if casting int -> double, and then double -> int */
	d  = imul(ca, cb);
}
