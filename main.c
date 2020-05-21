#include <stdio.h>
#include "functions.h"

int main()
{
	howManyCustomers = 0;
	int decision = 0; 
	int amount = 0;
	char firstname[10];
	char lastname[10];
	int id = 0;
	struct customer * first; 
	struct customer * iterate; 
	while(1)
	{
		
		welcomeScreen();
		scanf("%d", &decision);
		
		if(decision == 1) /*these decisions should be enums. we should also change to a switch*/
		{
			printf("Enter first name \n");
			scanf("%s", firstname);
			printf("Enter last name \n");
			scanf("%s", lastname);
			createUser(&first, firstname, lastname);
		}	
		else if(decision == 2) 
		{
			iterate = first;
			printf("enter your id to log in: \n");
			scanf("%d", &id);
			findUser(&iterate, &id);
			while(id)
			{
				logInScreen();
				scanf("%d", &decision);
				
				switch(decision)
				{
					case 1: /*these cases should be enums*/
						printf("Enter the amount you want to deposit: \n");
						scanf("%d", &amount);
						depositMoney(&iterate, amount);
						break;
					case 2:
						printf("Enter the amount you want to withdraw: \n");
						scanf("%d", &amount);
						withdrawMoney(&iterate, amount);
						break;
					case 3:
						showBalance(iterate);
						break;
					case 4:
						id = 0;
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
