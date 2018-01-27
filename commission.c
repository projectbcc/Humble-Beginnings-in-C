/* This is a program that outputs the total commission using a given formula. */
// By Brendan Clegg

#include <stdio.h>

main()

{
	float fRate, fSalesPrice, fCost;
	fRate = 0;
	fCost = 0;
	fSalesPrice = 0;
	printf("Enter the rate: ");
	scanf("%f", &fRate);
	printf("Enter the sales price: ");
	scanf("%f", &fSalesPrice);
	printf("Enter the cost: ");
	scanf("%f", &fCost);
	printf("$%.2f\n", fRate * (fSalesPrice - fCost));
}
