/*
 * COSC 130/140: Quick Sort in CSEM Subset of C (Brutal)
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, ccexpr, con, dobreak, dodo, doif, doret,
 *     endloopscope, exprs, fhead, fname, ftail, id, indx, m, n, op1, op2, rel,
 *     set, startloopscope
 *
 * Description:
 *     Just like how Merge Sort was used in 097.c, Quick Sort is a fast sorting
 *     algorithm used to sort values in arrays in a fast and efficient matter.
 *     Stolen straight from CS130 Lab 13 writeup, by Dr. Stephen Marz, just
 *     because I can.
 *
 *     This is a bonus test case to make sure your program truly works as
 *     intended. If you passed all prior test cases, this should work without
 *     an issue. If not, save it for last.
 */

int i[10];
int j[10];

QuickSort(int size) {
	QuickSortRun(0, size-1);
}

int QuickSortPartition(int lo, int hi) {
	int pivot;

	pivot = i[lo];
	lo = lo - 1;
	hi = hi + 1;

	do {
		do {
			lo = lo + 1;
		} while (i[lo] < pivot);

		do {
			hi = hi - 1;
		} while (i[hi] > pivot);

		if (lo >= hi) {
			break;
		}
		swap(i[lo], i[hi]);
	}
	while (1);

	return hi;
}

QuickSortRun(int lo, int hi) {
	int part;
	if (lo < hi) {
		part = QuickSortPartition(lo, hi);
		QuickSortRun(lo, part);
		QuickSortRun(part+1, hi);
	}
}
