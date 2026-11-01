#include <stdio.h>

int main(void)
{
	int row, column;

	for (row = 1; row <= 10; row++) {
		for (column = 1; column <= 10; column++) {
			printf("%4d", row * column);
		}
		printf("\n");
	}

	return 0;
}
