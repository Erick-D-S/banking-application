#include <stdio.h>
#include "functions.h"

int main()
{
	howManyCustomers = 0;
	struct customer first;
	createUser(&first);
	showBalance();
	depositMoney();
	withdrawMoney();
	return 0;
}