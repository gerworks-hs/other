#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void printWelcome() { //Welcome function
	printf(
		"Welcome to the Basic Calculator\n"
		"Currently we support (+ - * /)\n"	
	);
}

void flushStdin() {
	int c;
	while ((c=getchar()) != '\n') {}
}

char firstNum() {
	char num1[2];
	printf("Enter the first number -> ");
	flushStdin();
	fgets(num1, sizeof(num1), stdin);
	printf("The first number is %s\n", num1);
	return *num1;
}

char secondNum() {
	char num2[2];
	printf("Enter the second number -> ");
	flushStdin();
	fgets(num2, sizeof(num2), stdin);
	printf("The second number is %s\n", num2);
	return *num2;
}


int operator() { //Operator selection function
	char operator[2];
	while (true) { //Start of loop
		printf("Choose the operation that you want to perform -> ");
		fgets(operator, sizeof(operator), stdin); //Pick up user input
		if (strcmp(operator, "+") == 0) { //Conditionals to check operator input
			printf("You selected %s\n", operator);
			return 1;
		} else if (strcmp(operator, "-") == 0) {
			printf("You selected %s\n", operator);
			return 2;
		} else if (strcmp(operator, "*") == 0) {
			printf("You selected %s\n", operator);
			return 3;
		} else if (strcmp(operator, "/") == 0) {
			printf("You selected %s\n", operator);
			return 4;
		} else {
			printf("Not a valid option\n");
			flushStdin();
		}
	}
}

int main() {
	printWelcome();
	operator();
	firstNum();
	secondNum();
	return 0; //Main return
}
