#include <stdio.h>
#include "functions.h"

void withdrawMoney(struct customer **customerName, int amount)
{
   
   if (amount > ((*customerName)->balance))
	{
		printf("\n***Insufficient Balance***\n\n");
	}
	else
	{
		(*customerName)->balance = (*customerName)->balance - amount;
		printf("\n***Your new balance is %d***\n\n", (*customerName)->balance);
	}
	return;
}
