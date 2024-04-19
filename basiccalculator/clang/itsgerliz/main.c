#include <stdio.h>

void printWelcome() {
	printf(
		"Welcome to the Basic Calculator\n"
		"Currently we support (+ - * /)\n"	
	);
}

void flushBuffer() {
	int c;
	while ((c=getchar()) != '\n' && c != EOF) {}
}

int main() {
	printWelcome();
	return 0;
}
