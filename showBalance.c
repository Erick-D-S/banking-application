#include <stdio.h>
#include "functions.h"

void showBalance(struct customer *customerName)
{
	printf("\n Your balance is $%d \n", customerName->balance);
	return;
}
