#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void printWelcome() { //Welcome function
	printf(
		"Welcome to the Basic Calculator\n"
		"Currently we support (+ - * /)\n"	
	);
}

int chooseOperator() { //Operator selection function
	char operator[2];
	int c;
	while (true) {	
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
			while((c=getchar()) != '\n') {}
		}
	}
}

int main() {
	printWelcome(); //Call to the welcome function
	chooseOperator();
	return 0; //Main return
}
