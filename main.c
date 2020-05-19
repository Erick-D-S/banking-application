#include <stdio.h>
#include "functions.h"

int main()
{
	howManyCustomers = 0;
	int decision = 0; 
	int amount = 0;
	struct customer first; 
	while(1)
	{
		
		welcomeScreen();
		scanf("%d", &decision);
		
		if(decision == 1)
		{
			createUser(&first);
		}
		
		else if(decision == 2)
		{
			showBalance(first);
			amount = 50;
			depositMoney(&first, amount);
			showBalance(first);
			amount = 30;
			withdrawMoney(&first, amount);
			showBalance(first);
		}
	}
	return 0;
}
