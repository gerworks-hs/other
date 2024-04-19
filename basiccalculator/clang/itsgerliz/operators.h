#ifndef operators

void flushBuffer() {
	int c;
	while ((c=getchar()) != '\n' && c != EOF) {}
}

double sum(double *num1, double *num2) {
	return (&num1 + &num2);
}

#define operators
#endif
