/* This is a program that accepts a name as input and outputs a personalized greeting
message. */
// By Brendan Clegg

#include <stdio.h>

main()

{
	char cName[50];
	printf("Enter your name: ");
	scanf("%49s", cName);   //sets the limit of 49 characters
	printf("Hello, %s\n", cName);
}
