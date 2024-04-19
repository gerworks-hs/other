#include <stdio.h>
#include "operators.h"

void printWelcome() {
	printf(
		"Welcome to the Basic Calculator\n"
		"Currently we support (+ - * /)\n"	
	);
}

int main() {
	printWelcome();
	//flushBuffer();
	getchar();
	return 0;
}
