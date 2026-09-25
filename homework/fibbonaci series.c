#include <stdio.h>

int main()
{
	int terms;
	unsigned long long first = 0, second = 1, next;

	printf("Enter the number of terms: ");
	if (scanf("%d", &terms) != 1 || terms < 0) {
		printf("Invalid input.\n");
		return 1;
	}

	printf("Fibonacci series: ");
	for (int i = 0; i < terms; i++) {
		printf("%llu", first);
		if (i < terms - 1) {
			printf(" ");
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("\n");

	return 0;
}
