#include <stdio.h>
#include "functions.h"

void withdrawMoney(struct customer **customerName, int amount)
{
   
   if (amount > ((*customerName)->balance))
	{
		printf("\n Insufficient Balance \n");
	}
	else
	{
		(*customerName)->balance = (*customerName)->balance - amount;
		printf("\nPlease Collect your cash\n");
		printf("\nYour current balance after withdrawal is %d\n", (*customerName)->balance);
	}
	return;
}
