#ifndef getinput

void flushBuffer() {
	int c;
	while ((c=getchar()) != '\n') {}
}

int getInput() {
	char choice[2];
	int formattedChoice;
	printf(
		"Select the operation to perform:\n"
		"1 -> Addition\n"
		"2 -> Substraction\n"
		"3 -> Multiplication\n"
		"4 -> Division\n"		
	);	
	while (1) {
		printf("---> ");
		fgets(choice, sizeof(choice), stdin);
		flushBuffer();
		formattedChoice = atoi(choice);
		if (formattedChoice == 0) {
			printf("Invalid choice\n");
		} else if (formattedChoice <= 4) {
			printf("You selected -> %d\n", formattedChoice);
			return formattedChoice;
		}
	}
}

#define getinput
#endif
