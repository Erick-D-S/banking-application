#include <stdio.h>
#include "functions.h"

void depositMoney(struct customer **customerName, int amount )
{
	
	(*customerName)->balance = (*customerName)->balance + amount;
	printf("\n Your balance is after the deposit $%d \n", (*customerName)->balance);
	
    return;
}

