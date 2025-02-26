#include <stdio.h>

/**
 * C program to reverse a whole number
 * First prompt for input from the user
 * Read the input then re-arrange the digits as arranged before -> reverse
 *
 * Returns: with status 0 if successful else return with -1 or 1
 */

// first of we must have the reverse num function,
// then afterwards use it in the driver code

int reverseNum(int num) {
	// declare the rev_num variable then initialize it as 0
	int rev_num = 0;

	while (num > 0) {
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
	return rev_num;
}

// driver code
int main() {
	int num;

	// prompt the user for input
	printf("Enter a number: ");
	scanf("%d", &num);

	// then finally print the reversed number
	printf("Reverse of %d is %d\n", num, reverseNum(num));

	return 0;
}

