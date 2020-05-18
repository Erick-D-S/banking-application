#include <stdio.h>
#include "functions.h"

int main()
{
	howManyCustomers = 0;
	int decision = 0; 
	struct customer first; /*should this be an array?*/
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
			showBalance();
			depositMoney();
			withdrawMoney();
		}
	}
	return 0;
}