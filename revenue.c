/* This is a program that displays the total revenue by multiplying price by the quantity, inputted by the user. */
// By Brendan Clegg

#include <stdio.h>

main()

{
	float fPrice, fQuantity;
	fPrice = 0;
	fQuantity = 0;

	/* Revenue = Price * Quantity */

	printf("Enter the price: ");
	scanf("%f", &fPrice);
	printf("Enter the quantity: ");
	scanf("%f", &fQuantity);
	printf("Your revenue is $%.2f\n", fPrice * fQuantity);
}
