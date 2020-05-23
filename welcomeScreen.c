#include <stdio.h>
#include "functions.h"

void welcomeScreen()
{
	printf("\nWelcome to the bank\n");
	printf("Choose one of the following options:\n");
	printf("1. Create new customer\n");
	printf("2. Log in\n");
	printf("3. Delete all users\n");
	printf("4. Shut down\n");
	return;
}

void logInScreen(struct customer *customerName)
{
	printf("\nWelcome %s %s\n", customerName->firstName, customerName->lastName);
	printf("Choose one of the following options:\n");
	printf("1. Deposit money\n");
	printf("2. Withdraw money\n");
	printf("3. Show balance\n");
	printf("4. Log out\n");
	return;
}