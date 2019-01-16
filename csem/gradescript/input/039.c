/*
 * Functions Test (Nested Version)
 *
 * Required Functions:
 *     bgnstmt, call, con, doret, exprs, fhead, fname, ftail, id, op1, op2,
 *     set, string
 *
 * Hint:
 *     Make sure your sem_recs are being created properly. Nested functions are
 *     supposed to be supported. If you do this, the gradescript will auto-pass
 *     this test case... assuming you wrote the rest correctly.
 *
 *     Also remember to do your casting properly between function calls.
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

	/* Print out stuff */
	printf(
		/* Format String */
		"2 + 2 = %d%d - %d = %d\nPRINT: %d",

		/* Parametre */
		5,
		ca, cb, sub(ca, cb),

		/* Nested printf... just because it should work if you wrote it right */
		printf("%lg is %lg", fmul(ca, cb), d)
	);
}
