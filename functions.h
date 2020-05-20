struct customer
{
	int balance;
	int id;
	char firstName[10];
	char lastName[10];
}customer;

int howManyCustomers;

void createUser(struct customer * customerName);
void showBalance(struct customer customerName);
void depositMoney(struct customer *customerName, int amount );
void withdrawMoney(struct customer *customerName, int amount);
void welcomeScreen();
void logInScreen();
