#include <stdio.h>

int main(void)
{
	int size = 5;

	for (int row = 0; row < size; row++) {
		for (int column = 0; column < size; column++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
