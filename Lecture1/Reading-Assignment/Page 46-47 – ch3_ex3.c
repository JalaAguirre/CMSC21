/* Adds two fractions */
#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;

	printf("Enter first fraction: ");
	scanf("%d/%d", &num1, &denom1);

	printf("Enter second fraction: ");
	scanf("%d/%d", &num2, &denom2);

	// calculates the sum of the numerator by multiplying to the opposing denominator
	result_num = num1 * denom2 + num2 * denom1;
	// calculates the sum of the denominator by multiplying both denominators
	result_denom = denom1 * denom2;
	// displays the sum of the numerator and the denominator in a fraction form
	printf("The sum is %d/%d\n", result_num, result_denom);

	return 0;
}
