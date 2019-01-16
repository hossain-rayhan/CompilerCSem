/*
 * COSC 462 HW 1-5: Jacobi in CSEM Subset of C (Brutal)
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, ccand, con, docontinue, dofor, doif, doret,
 *     endloopscope, exprs, fhead, fname, ftail, id, indx, m, n, op1, op2, rel,
 *     set, startloopscope
 *
 * Description:
 *     Initialises a 10x10 Matrix in the form of a 1D array and then computes
 *     the Jacobi of it. While this should be done in parallel, csem is serial.
 *     Therefore, here's a serial implementation. Enjoy.
 *
 * Hint:
 *     Like the other XX9.c scripts, this one should auto-pass if you have done
 *     your break/continue functions correctly, as well as your loop functions.
 *     If you struggle on this test case, it is recommended to save it for last
 *     because of its complexity. However, passing 052.c, 055.c, and 058.c,
 *     along with their harder variants 062.c, 065.c, and 068.c, should ensure
 *     that you pass this test case.
 *
 *     This is a bonus test case to make sure your program truly works as
 *     intended. If you passed all prior test cases, this should work without
 *     an issue. If not, save it for last.
 */

/* 10x10 Jacobi w/ Ghost Regions */
double o[144];
double n[144];
int j_w, j_h;

jacobi_generate(int x, int y, int w, int h) {
	int i, j, k, l;
	k = 0;

	/* Set values to random stuff */
	for (j = y; j < y + h; j += 1) {
		for (i = x; i < x + w; i += 1) {
			l = rand() % 100;
			o[k] = l;
			n[k] = l;
			k += 1;
		}
	}

	/*
	 * Because we want to be inefficient, let's set the borders to 0 in another
	 * 4 loops... And this is totally untested.
	 */

	/* North */
	for (i = 0; i < j_w; i += 1) {
		/* If by some miracle... */
		if (o[i] == 0 && n[i] == 0)
			continue;
		o[i] = 0;
		n[i] = 0;
	}

	/* South */
	l = (j_w * j_w) - j_w;
	for (i = l; i < l + j_w; i += 1) {
		/* If by some miracle... */
		if (o[k] == 0 && n[k] == 0)
			continue;
		o[i] = 0;
		n[i] = 0;
	}

	/* West */
	l = j_w * j_h;
	for (i = 0; i < l; i += j_w) {
		/* If by some miracle... */
		if (o[k] == 0 && n[k] == 0)
			continue;
		o[i] = 0;
		n[i] = 0;
	}

	/* East */
	l = j_w * j_h;
	for (i = j_w - 1; i < l; i += j_w) {
		/* If by some miracle... */
		if (o[k] == 0 && n[k] == 0)
			continue;
		o[i] = 0;
		n[i] = 0;
	}
}

double jacobi_compute(int x, int y, int w, int h) {
	/* Compute the jacobi of a region */	
	int i, j, k, l;
	double amt, diff, sum;
	k = 0;
	sum = 0;

	/* Because Double Constants aren't allowed, we'll cheat */
	amt = 1;
	amt /= 4;

	/* Iterate through all values (other than borders) and compute value */
	for (j = y; j < y + h; j += 1) {
		for (i = x; i < x + w; i += 1) {
			/* Convert 2D to 1D */
			k = (y * j_w) + x;

			/* Average of surrounding area */
			n[k] = amt * (
				o[k - j_w] + o[k + j_w] + o[k - 1] + o[k + 1]
			);

			/* Calculate Sum */
			diff = n[k] - o[k];
			sum += diff * diff;
		}
	}

	return sum;
}

main() {
	double residual;

	/* Configure Jacobi Matrix */
	j_w = 10;
	j_h = j_w;

	/* Do fancy stuff */
	jacobi_generate(0, 0, j_w + 2, j_h + 2);
	residual = jacobi_compute(1, 1, j_w, j_w);
}
