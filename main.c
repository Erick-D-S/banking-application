#include <stdio.h>
#include "functions.h"

int main()
{
	howManyCustomers = 0;
	struct customer first; /*should this be an array?*/
	while(1)
	{
		welcomeScreen();
		createUser(&first);
		showBalance();
		depositMoney();
		withdrawMoney();
	}
	return 0;
}