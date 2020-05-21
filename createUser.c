#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"


void createUser(struct customer ** headNode, char first[], char last[])
{

	howManyCustomers++;
	struct customer * new_node = (struct customer*)malloc(sizeof(struct customer));
	new_node->next = *headNode;
	strncpy(new_node->firstName, first, 10);
	strncpy(new_node->lastName, last, 10);
	new_node->id = howManyCustomers;
	new_node->balance = 0;
	/*printf(" Customer Name %s %s \n", new_node->firstName,
										new_node->lastName);
	printf(" Your Bank ID is %d \n", new_node->id); */

	*headNode = new_node;
	return;
}

void findUser(struct customer ** list, int * id)
{
	while(*list != NULL)
	{
		if((*list)->id == *id)
			break;
		else
			*list = (*list)->next;

	}
	if(*list == NULL)
	{
		printf("Invalid id \n");
		*id = 0;
	}

	return;
}