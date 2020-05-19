//
//  main.c
//  Deposit Money
//
//  Created by Veer Patel on 5/18/20.
//  Copyright © 2020 Veer Patel. All rights reserved.
//




#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

struct Customer
{
    char firstName[20];
    char lastName[20];
    int accountNumber;
    float balance;
};

int howManyCustomers = 0;

int main()
{
    struct Customer customerArray[100];
    int i=0, accountNumber;
    float depositMoney;
    printf("Hello! \n");
    
    for (int j = 0; j < 3; j++)
    {
        printf("Enter first name : ");
        scanf("%s", customerArray[j].firstName);
        printf("Enter last name : ");
        scanf("%s", customerArray[j].lastName);
        customerArray[j].accountNumber = (rand()%(1000000-0+1))+0;
        customerArray[j].balance = 0;
        howManyCustomers += 1;
    }
    
    for(int k = 0; k < howManyCustomers; k++)
    {
        printf("Firstname: %s\n", customerArray[k].firstName);
        printf("Lastname: %s\n", customerArray[k].lastName);
        printf("Account No.: %d\n", customerArray[k].accountNumber);
        printf("Balance: %f\n", customerArray[k].balance);

    }
    
    printf("Enter Account Number for deposit : ");
    scanf("%d", &accountNumber);
    printf("Enter Deposit Amount: ");
    scanf("%f", &depositMoney);
    
    while(i < howManyCustomers && accountNumber != customerArray[i].accountNumber) //replace the customerArray with the customer data structure of struct type)
        
    {
        i++;
    }
    
    printf("i: %d", i);
    customerArray[i].balance += depositMoney;
    printf("Customer details after deposit: ");
    printf("Firstname: %s\n", customerArray[i].firstName);
    printf("Lastname: %s\n", customerArray[i].lastName);
    printf("Account No.: %d\n", customerArray[i].accountNumber);
    printf("Balance: $%0.2f\n", customerArray[i].balance);
    
    
    return 0;
}
