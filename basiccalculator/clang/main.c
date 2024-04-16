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
	char num1[2];
	printWelcome();
	operator();
	return 0; //Main return
}
