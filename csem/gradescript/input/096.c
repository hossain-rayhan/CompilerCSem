/*
 * COSC 365/494: Floyd-Warshall (Brutal)
 *
 * Required Functions:
 *     backpatch, bgnstmt, call, con, dofor, doif, doifelse, doret,
 *     endloopscope, exprs, fhead, fname, ftail, id, indx, m, n, op1, op2, rel,
 *     set, startloopscope, string
 *
 * Description:
 *     You have a weighted graph and want to compute the shortest path from any
 *     single point to another. The Floyd-Warshall algorithm is a O(N^3) time
 *     algorithm which does just that.
 *
 *     This is a bonus test case to make sure your program truly works as
 *     intended. If you passed all prior test cases, this should work without
 *     an issue. If not, save it for last.
 */

int matrix_w;
int matrix_h;
int list_size;
int matrix[144];
int node_list[12];
int adjacency_list[144];
int INFINITY;

/* To make our lives easier */
c2d_to_1d(int x, int y) {
	return (y * matrix_w) + x;
}

/* Set our matrix to be all at INFINITY */
matrix_init() {
	int i, j, index;
	for (j = 0; j < matrix_h; j += 1) {
		for (i = 0; i < matrix_w; i += 1) {
			index = c2d_to_1d(i, j);
			if (i == j)
				matrix[index] = 0;
			else
				matrix[index] = INFINITY;
		}
	}
}

/* Generate Adjacency List */
matrix_generate() {
	int i, j, k, a, index1, index2;

	/* Set random number generator based on PID since we don't have time.h */
	srand(getpid());
	a = rand() % 5;

	/* Generate adjacency matrix sort of. */
	for (j = 0; j < list_size; j += 1) {
		for (i = j; i < list_size; i += 1) {
			index1 = c2d_to_1d(i, j);
			index2 = c2d_to_1d(j, i);
			if ((rand() % 10) > (6 + a)) {
				k = rand() % 100;
				matrix[index1] = k;
				matrix[index2] = k;
			}

			if (i == j) {
				matrix[index1] = 0;
				matrix[index2] = 0;
			}
		}
	}
}

/* Floyd-Marshall Implementation in C */
floyd_marshall() {
	int i, j, k, ij, ik, kj;

	/* Compute adjacency list by unleashing our O(N^3) algorithm */
	for (k = 0; k < list_size; k += 1) {
		for (i = 0; i < list_size; i += 1) {
			for (j = 0; j < list_size; j += 1) {
				ij = c2d_to_1d(i, j);
				ik = c2d_to_1d(i, k);
				kj = c2d_to_1d(k, j);
				if (matrix[ij] > matrix[ik] + matrix[kj])
					matrix[ij] = matrix[ik] + matrix[kj];
			}
		}
	}
}


/* Finally, commence */
main() {
	int i, j;
	INFINITY = 99999; /* INT_MAX = 2147483647 */
	list_size = 12;

	/* Set up our Matrix */
	matrix_w = list_size;
	matrix_h = list_size;
	matrix_init();
	
	/* Now do stuff */
	matrix_generate();
	floyd_marshall();

	/* Print to stdout */
	for (j = 0; j < list_size; j += 1) {
		for (i = 0; i < list_size; i += 1) {
			if (matrix[c2d_to_1d(i, j)] == INFINITY)
				printf("  INF ");
			else
				printf("%5d ", matrix[c2d_to_1d(i, j)]);
		}
		printf("\n");
	}
}
