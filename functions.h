struct customer
{
	int balance;
	int id;
	char firstName[10];
	char lastName[10];
	struct customer * next;
}customer;

int howManyCustomers;

void createUser(struct customer ** headNode, char first[], char last[]);
void findUser(struct customer ** list, int * id);
void showBalance(struct customer *customerName);
void depositMoney(struct customer **customerName, int amount );
void withdrawMoney(struct customer **customerName, int amount);
void welcomeScreen();
void logInScreen(struct customer *customerName);
void deleteUsers(struct customer ** headNode);
