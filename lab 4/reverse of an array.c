#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter the number of elements: ");
	if (scanf("%d", &n) != 1 || n < 1) {
		printf("Invalid array size.\n");
		return 1;
	}

	int array[n];
	printf("Enter %d elements: ", n);
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &array[i]) != 1) {
			printf("Invalid input.\n");
			return 1;
		}
	}

	for (int i = 0; i < n / 2; i++) {
		int temp = array[i];
		array[i] = array[n - 1 - i];
		array[n - 1 - i] = temp;
	}

	printf("Reversed array: ");
	for (int i = 0; i < n; i++) {
		printf("%d%s", array[i], i == n - 1 ? "\n" : " ");
	}

	return 0;
}
