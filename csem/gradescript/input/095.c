/*
 * The Fisher-Yales Shuffle Algorithm (Slightly Brutal)
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, dodo, dofor, endloopscope, fhead, fname,
 *     ftail, id, indx, m, n, op1, op2, rel, set, startloopscope
 *
 * Hint:
 *     Just implement the functions required and you should be fine. This uses
 *     a do-while loop and a for loop. Make sure your functions work as well.
 *     Then you should be good to go. Passing the first 50 test cases will
 *     almost guarantee that this script passes.
 *
 *     This is a bonus test case to make sure your program truly works as
 *     intended. If you passed all prior test cases, this should work without
 *     an issue. If not, save it for last.
 */

int RAND_MAX;
int array[64];

rand_int(int n) {
	int limit;
	int rnd;

	limit = RAND_MAX - RAND_MAX % n;

	do {
		rnd = rand();
	}
	while (rnd >= limit);
}

shuffle(int n) {
	int i, j, tmp;

	for (i = n - 1; i > 0; i -= 1) {
		j = rand_int(i + i);
		tmp = array[j];
		array[j] = array[i];
		array[i] = tmp;
	}
}

main() {
	/* Guaranteed to be at least this much in any implementation of RAND_MAX */
	RAND_MAX = 32767;

	/* Just don't call anything */
}
