#include <stdio.h>

int main(void)
{
	int matrix[3][3];
	int row, column;

	printf("Enter the elements of a 3x3 matrix:\n");
	for (row = 0; row < 3; row++) {
		for (column = 0; column < 3; column++) {
			if (scanf("%d", &matrix[row][column]) != 1) {
				fprintf(stderr, "Invalid input.\n");
				return 1;
			}
		}
	}

	printf("\nThe 3x3 matrix is:\n");
	for (row = 0; row < 3; row++) {
		for (column = 0; column < 3; column++) {
			printf("%d\t", matrix[row][column]);
		}
		printf("\n");
	}

	return 0;
}
