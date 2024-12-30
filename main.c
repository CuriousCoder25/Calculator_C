#include <stdio.h> // include stdio.h library
int main() { //main function body start
    char operator; // variable declaration
    double first, second; // variable declaration
    printf("Enter an operator (+, -, *, /): "); // print Enter an operator (+, -, *, /):
    scanf("%c", &operator); // read the operator
    printf("Enter two operands: "); // print Enter two operands:
    scanf("%lf %lf", &first, &second); // read the two operands
    switch (operator) { // switch case start
    case '+': // case 1
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second); // print the addition of two numbers
        break; // break the program
    case '-': // case 2
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second); // print the subtraction of two numbers
        break; // break the program
    case '*': // case 3
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second); // print the multiplication of two numbers
        break; // break the program
    case '/': // case 4
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second); // print the division of two numbers
        break; // break the program
    default: // default case
        printf("Error! operator is not correct"); // print Error! operator is not correct
    }
    return 0; // return statement
} //main function body end
//learning github