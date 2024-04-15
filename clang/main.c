#include <stdio.h>
#include <string.h>

void printWelcome() { //Welcome function
	printf(
		"Welcome to the Basic Calculator\n"
		"Currently we support (+ - * /)\n"	
	);
}

int chooseOperator() {
	char operator[2];
	printf("Choose the operation that you want to perform -> ");
	fgets(operator, sizeof(operator), stdin);
	operator[strcspn(operator, "\n")] == 0;
	if (strcmp(operator, "+") == 0) {
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
		return 0;
	}
}

int main() {
	printWelcome(); //Call to the welcome function
	chooseOperator();
	return 0; //Main return
}
