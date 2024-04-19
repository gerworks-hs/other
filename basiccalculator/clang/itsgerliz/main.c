#include <stdio.h>
#include <stdlib.h>
#include "operators.h"
#include "getinput.h"

int main() {
	int choice = getInput();
	switch (choice) {
		case 1:
			printf("SUM\n");
			break;
		case 2:
			printf("SUB\n");
			break;
		case 3:
			printf("MULT\n");
			break;
		case 4:
			printf("DIV\n");
			break;
	}
	getchar(); //Pause to exit
	return 0;
}
