banking: main.o createUser.o showBalance.o depositMoney.o withdrawMoney.o welcomeScreen.o algorithmsExamples.o
	gcc -o banking main.o createUser.o showBalance.o depositMoney.o withdrawMoney.o welcomeScreen.o algorithmsExamples.o
	
main.o: main.c functions.h
	gcc -Wall -c main.c
	
createUser.o: createUser.c functions.h
	gcc -Wall -c createUser.c
	
showBalance.o: showBalance.c functions.h
	gcc -Wall -c showBalance.c
	
depositMoney.o: depositMoney.c functions.h
	gcc -Wall -c depositMoney.c
	
withdrawMoney.o: withdrawMoney.c functions.h
	gcc -Wall -c withdrawMoney.c
	
welcomeScreen.o: welcomeScreen.c functions.h
	gcc -Wall -c welcomeScreen.c
	
algorithmsExamples.o: algorithmsExamples.c functions.h
	gcc -Wall -c algorithmsExamples.c