#include <stdio.h>
#include "functions.h"

int main()
{
	howManyCustomers = 0;
	int decision = 0; 
	int amount = 0;
	int logout = 0;
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
			logout = 0;
			while(!logout)
			{
				logInScreen();
				scanf("%d", &decision);
				
				switch(decision)
				{
					case 1: 
						printf("Enter the amount you want to deposit: \n");
						scanf("%d", &amount);
						depositMoney(&first, amount);
						break;
					case 2:
						printf("Enter the amount you want to withdraw: \n");
						scanf("%d", &amount);
						withdrawMoney(&first, amount);
						break;
					case 3:
						showBalance(first);
						break;
					case 4:
						logout = 1;
						break;
					default:
						printf("Enter a valid option\n");
						break;
						
				}
			}
		}
	}
	return 0;
}
