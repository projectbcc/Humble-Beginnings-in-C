/* This is a program that takes a predetermined set of variables and displays the 
output of the given equation. */
// By Brendan Clegg

#include <stdio.h>

main()

{
	int a = 0;
	int b = 0;
	int x = 0;
	int y = 0;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	printf("%d\n", (a - b) * (x - y));
}
