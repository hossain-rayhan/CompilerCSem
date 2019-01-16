/*
 * Merge Sort in CSEM Subset of C (Brutal)
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, ccand, con, dofor, doifelse, doret, dowhile,
 *     endloopscope, exprs, fhead, fname, ftail, id, indx, m, n, op1, op2, rel, 
 *     set, startloopscope, string
 *
 * Description:
 *     This is an implementation of the Merge Sort algorithm which will sort an
 *     array of integers in the global variable "i".
 *
 *     This is a bonus test case to make sure your program truly works as
 *     intended. If you passed all prior test cases, this should work without
 *     an issue. If not, save it for last.
 */

int i[10];
int j[10];

merging(int low, int mid, int high) {
	int l1, l2, k;
	l1 = low;
	l2 = mid + 1;

	for(k = low; l1 <= mid && l2 <= high; k += 1) {
		if(i[l1] <= i[l2]) {
			j[k] = i[l1];
			l1 += 1;
		}
		else {
			j[k] = i[l2];
			l2 += 1;
		}
	}

	while(l1 <= mid) {    
		j[k] = i[l1];
		k  += 1;
		l1 += 1;
	}

	while(l2 <= high) {   
		j[k] = i[l2];
		k  += 1;
		l1 += 1;
	}

	for(k = low; k <= high; k += 1)
		i[k] = j[k];
}

sort(int low, int high) {
	int mid;

	if(low < high) {
		mid = (low + high) / 2;
		sort(low, mid);
		sort(mid+1, high);
		merging(low, mid, high);
	} else { 
		return;
	}   
}

main() {
	int ii;

	/* Set Variables */
	i[0] = 4;
	i[1] = 7;
	i[2] = 9;
	i[3] = 11;
	i[4] = 1;
	i[5] = -5;
	i[6] = 6;
	i[7] = -837;
	i[8] = 13587;
	i[9] = -3598359;

	/* Perform the sort */
	sort(0, 9);

	/* Print out the elements of the array */
	for (ii = 0; ii < 10; ii += 1) {
		printf("%d ", i[ii]);
	}
	printf("\n");
}
