
#include <stdio.h>

int main(void) {
	int count;
	long long sum = 0;

	printf("Enter the number of elements: ");
	if (scanf("%d", &count) != 1 || count < 0) {
		return 1;
	}

	printf("Enter %d array elements: ", count);
	for (int i = 0; i < count; ++i) {
		int value;
		if (scanf("%d", &value) != 1) {
			return 1;
		}
		sum += value;
	}

	printf("Sum of array elements: %lld\n", sum);
	return 0;
}
