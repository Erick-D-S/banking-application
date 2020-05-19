#include <stdio.h>
#include "functions.h"

void createUser(struct customer * customerName)
{

	howManyCustomers++;
	customerName->firstName[0] = 'A';
	customerName->lastName[0] = 'T';
	customerName->id = howManyCustomers;
	customerName->balance = 0;
	printf(" Welcome to Bank \n");
	printf(" Customer Name %s %s \n", customerName->firstName, 
										customerName->lastName);
	printf(" Your Bank ID is %d \n", customerName->id);
	
	
	return;
}
