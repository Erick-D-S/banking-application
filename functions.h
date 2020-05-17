struct customer
{
	int balance;
	int id;
	char firstName[10];
	char lastName[10];
}customer;

int howManyCustomers;

void createUser(struct customer * customer);
void showBalance();
void depositMoney();
void showBalance();
void withdrawMoney();