# banking-application
basic banking application<br />
rough requirements:<br />
> 1. Customers shall be defined by the structure "customer" with attributes for first name, last name, acct number, balance, and a pointer to the next customer.<br />
> 2. There shall be a global variable "howManyCustomers" to keep track of how many customers there are. <br />
> 3. Welcome screen shall have two options: "Log in", "Create new customer:", and "purge customer list". purge customer list will loop through the linked list and "free" the memory used by each node. <br />
> 4. The "create new user customer" option shall allocate a new "customer" with a first name, last name, unique acct number,
>    and balance = 0. linked list needs to be created in main. this function will dynamically alocate a new node using malloc. <br />
> 5. The "log in" option shall allow a log in if a valid acct number is given. needs to cycle through the linked list to find the node with the matching id  <br />
> 6. If a log in is successful, the following options shall be provided:<br />
   a. deposit money  <br />
   b. withdraw money if there is enough balance  <br />
   c. show balance  <br />
   d. log out  <br />
    
Travis Build Status:<br />
[![Build Status](https://travis-ci.com/Erick-D-S/banking-application.svg?branch=master)](https://travis-ci.com/Erick-D-S/banking-application)<br />

Codacy Review:<br />
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/4ed056e9d2cd44c2a6c3eee3dbd86241)](https://www.codacy.com/manual/Erick-D-S/banking-application?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Erick-D-S/banking-application&amp;utm_campaign=Badge_Grade)<br />
