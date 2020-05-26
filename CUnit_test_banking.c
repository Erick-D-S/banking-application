#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "functions.h"


/*******************************************************************
*	Test 1: createUser()
*	Create pointer of type customer.
*	Call createUser with the address to this pointer, a first name, 
*    and a last name as parameters.
*	Repeat the call to createUser 3 times with different names.
*	Verify that there were three nodes allocated to the pointer 
*    with the correct names, unique id, and a balance of $0.
*********************************************************************/

void test_createUser(void)
{

/* Create a pointer of type customer*/
	struct customer *customerptr;

/* Call createUser with the address to this pointer, a first name, 
*   and a last name as parameters 
*/
	char first[3][30] = {"Adam", "John", "Peter"};
	char last[3][30] = {"Smith", "Thomas", "Williams"};
	
/*	Verify that there were three nodes allocated to the pointer 
*    with the correct names, unique id, and a balance of $0.
*/

//Customer 1
	createUser(&customerptr, first[0], last[0]);
	CU_ASSERT_STRING_EQUAL("Adam", customerptr->firstName);
	CU_ASSERT_STRING_EQUAL("Smith", customerptr->lastName);
	CU_ASSERT_EQUAL(1, customerptr->id);
	CU_ASSERT_EQUAL(0, customerptr->balance);
//Customer 2	
	createUser(&customerptr, first[1], last[1]);
	CU_ASSERT_STRING_EQUAL("John", customerptr->firstName);
	CU_ASSERT_STRING_EQUAL("Thomas", customerptr->lastName);
	CU_ASSERT_EQUAL(2, customerptr->id);
	CU_ASSERT_EQUAL(0, customerptr->balance);
//Customer 3	
	createUser(&customerptr, first[2], last[2]);
	CU_ASSERT_STRING_EQUAL("Peter", customerptr->firstName);
	CU_ASSERT_STRING_EQUAL("Williams", customerptr->lastName);
	CU_ASSERT_EQUAL(3, customerptr->id);
	CU_ASSERT_EQUAL(0, customerptr->balance);
}
/********************************************************************
*
*		    				END OF TEST 1
*
********************************************************************/

/*********************************************************************
*	Test 2: findUser()
*	Create 2 pointers of type customer.
*	Call createUser 3 times with different names the pointer of type 
*	customer that is to be used as the head of the list.
*	Set the unused pointer equal to the head of the list.
*	Call findUser with this pointer and with an arbitrary id.
*	Verify that the returned node is the expected one. 
*********************************************************************/

void test_findUser(void)
{
	/* Create 2 pointers of type customer */
	struct customer *customerptr2;
	struct customer *customerlist;
	/* Initialize variables */
	int id = 1;
	howManyCustomers = 0;
	char first[3][30] = {"Adam", "John", "Peter"};
	char last[3][30] = {"Smith", "Thomas", "Williams"};
	
	/* Call createUser 3 times with different names the pointer of type 
	customer that is to be used as the head of the list */
	createUser(&customerptr2, first[0], last[0]);
	createUser(&customerptr2, first[1], last[1]);
	createUser(&customerptr2, first[2], last[2]);
	/*Set the unused pointer equal to the head of the list */
	customerlist = customerptr2;
	/*Call findUser with this pointer and with an arbitrary id */
	findUser(&customerlist, &id);
	/* Verify that the returned node is the expected one*/
	CU_ASSERT_EQUAL(1, customerlist->id);
	
	
}
/********************************************************************
*
*		    				END OF TEST 2
*
********************************************************************/


/*******************************************************************
*	Test 3: depositMoney()
*	Create pointer of type customer.
*	Call createUser with the address to this pointer and a name.
*	Call depositMoney with this pointer and an amount of money.
*	Verify that the amount of money is updated as expected.
*******************************************************************/
void test_depositMoney(void)
{
	/* Create a pointer of type customer*/
	struct customer *customerptr3;
	/* Initialize variables */
	char first[3][30] = {"Adam", "John", "Peter"};
	char last[3][30] = {"Smith", "Thomas", "Williams"};
	int amount[3] = {100, 150, 50};
	

//Customer 1
	/* Call createUser with the address to this pointer and a name*/
	createUser(&customerptr3, first[0], last[0]);
	/* Call depositMoney with this pointer and an amount of money */
	depositMoney(&customerptr3, amount[0]);
	/* Verify that the amount of money is updated as expected */
	CU_ASSERT_EQUAL(100, customerptr3->balance);
	
//Customer 2
	createUser(&customerptr3, first[1], last[1]);
	depositMoney(&customerptr3, amount[1]);
	CU_ASSERT_EQUAL(150, customerptr3->balance);
	
//Customer 3
	createUser(&customerptr3, first[2], last[2]);
	depositMoney(&customerptr3, amount[2]);
	CU_ASSERT_EQUAL(50, customerptr3->balance);
	
	
}
/********************************************************************
*
*		    				END OF TEST 3
*
********************************************************************/

/*******************************************************************
*	Test 4: withdrawMoney()
*	Create pointer of type customer.
*	Call createUser with the address to this pointer and a name.
*	Call depositMoney with this pointer and an amount of money.
*	Call withdrawMoney with this pointer and a valid amount of money.
*	Verify that the amount of money is updated as expected.
*	Call withdrawMoney with an amount of money that is too large.
*	Verify that the amount of money is not updated.
********************************************************************/
void test_withdrawMoney(void)
{
	/* Create a pointer of type customer*/
	struct customer *customerptr4;
	/* Initialize variables */
	char first[3][30] = {"Adam", "John", "Peter"};
	char last[3][30] = {"Smith", "Thomas", "Williams"};
	int depositamount[3] = {100, 150, 50};
	int withdrawamount[3] = {50, 100, 100};
	
//Customer 1
	/* Call createUser with the address to this pointer and a name*/
	createUser(&customerptr4, first[0], last[0]);
	/* Call depositMoney with this pointer and an amount of money */
	depositMoney(&customerptr4, depositamount[0]);
	/* Call withdrawMoney with this pointer and a valid amount of money */
	withdrawMoney(&customerptr4, withdrawamount[0]);
	/* Verify that the amount of money is updated as expected */
	CU_ASSERT_EQUAL(50, customerptr4->balance);
	
//Customer 2
	createUser(&customerptr4, first[1], last[1]);
	depositMoney(&customerptr4, depositamount[1]);
	withdrawMoney(&customerptr4, withdrawamount[1]);
	CU_ASSERT_EQUAL(50, customerptr4->balance);

//Customer 3
	createUser(&customerptr4, first[2], last[2]);
	depositMoney(&customerptr4, depositamount[2]);
	withdrawMoney(&customerptr4, withdrawamount[2]);
	/* Call withdrawMoney with an amount of money that is too large.
	Verify that the amount of money is not updated */
	CU_ASSERT_EQUAL(50, customerptr4->balance);	
}
/********************************************************************
*
*		    				END OF TEST 4
*
********************************************************************/



int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("banking", 0, 0);

    CU_add_test(suite, "createUser", test_createUser);
	CU_add_test(suite, "findUser", test_findUser);
    CU_add_test(suite, "depositMoney", test_depositMoney);
	CU_add_test(suite, "withdrawMoney", test_withdrawMoney);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}