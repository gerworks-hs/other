#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void printWelcome() {
    printf(
        "Welcome to the Basic Calculator\n"
        "Currently we support (+ - * /)\n"
    );
}

double getNumber(const char *prompt) {
    double num;
    char input[20];
    while (true) {
        printf("%s", prompt);
        fgets(input, sizeof(input), stdin);
        if (sscanf(input, "%lf", &num) == 1) {
            return num;
        } else {
            printf("Not a valid number. Please enter a valid number.\n");
        }
    }
}

char getOperator() {
    char operator;
    printf("Choose the operation that you want to perform (+ - * /): ");
    scanf(" %c", &operator);
    while (getchar() != '\n'); // Limpiamos el búfer de entrada
    return operator;
}

int main() {
    printWelcome();
    char selectedOperator = getOperator();
    double num1 = getNumber("Enter the first number -> ");
    double num2 = getNumber("Enter the second number -> ");

    double result;
    switch (selectedOperator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero.\n");
                return 1; // Rompemos bloque con error
            }
            break;
        default:
            printf("Invalid operator.\n");
            return 1; // Rompemos el bloque con error
    }
    printf("Result: %.2lf\n", result);
    return 0;
}
