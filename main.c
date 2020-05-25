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
	struct customer * first = NULL; 
	struct customer * iterate = NULL; 
	void (*welcome_screen_ptr)() = welcomeScreen;
	while(1)
	{
		welcome_screen_ptr();
		scanf("%d", &decision);
		
		switch(decision) /*these decisions should be enums.*/
		{
			case 1:
			{
				printf("Enter first name \n");
				scanf("%s", firstname);
				printf("Enter last name \n");
				scanf("%s", lastname);
				createUser(&first, firstname, lastname);
				break;
			}
			case 2: 
			{
				iterate = first;
				printf("enter your id to log in: \n");
				scanf("%d", &id);
				findUser(&iterate, &id);
				while(id)
				{
					logInScreen(iterate);
					scanf("%d", &decision);
					
					switch(decision)
					{
						case 1: /*these cases should be enums*/
							printf("\nEnter the amount you want to deposit: \n");
							scanf("%d", &amount);
							depositMoney(&iterate, amount);
							break;
						case 2:
							printf("\nEnter the amount you want to withdraw: \n");
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
							printf("****\nEnter a valid option****\n\n");
							break;
							
					}
				}
				break;
			}
			case 3:
			{
				deleteUsers(&first);
				howManyCustomers = 0;
				break;
			}
			case 4:
			{
				return 0;
			}
			default:
			{
				printf("****\nEnter a valid option****\n\n");
				break;
			}
		}
	}
}
