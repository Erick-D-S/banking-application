#include <stdio.h>
#include "functions.h"

void depositMoney(struct customer **customerName, int amount )
{
	
	(*customerName)->balance = (*customerName)->balance + amount;
	printf("\n***Your new balance is: $%d***\n\n", (*customerName)->balance);
	
    return;
}

