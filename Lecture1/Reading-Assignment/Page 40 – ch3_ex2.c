/* Prints int and float values in various formats */
#include <stdio.h>

int main(void)
{
	int i;
	float x;

	i = 40;
	x = 839.21f;

	// %d displays the value in a decimal form
	// %5d displays the value in a decimal form, with 5 characters right-justified format
	// %-5d displays the value in a decimal form, with 5 characters left-justified format
	// %5.3d displays the value in a decimal form, with 5 characters but with 3 digits

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

	// %10.3f displays the value in a float form, with 10 characters and 3 decimal digits
	// %10.3e displays the value in a exponential form, with 10 characters and 3 decimal digits
	// %-10g displays the value in a fixed decimal form or exponential form, with 10 characters left-justified format
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	return 0;
}
