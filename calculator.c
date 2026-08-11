#include <stdio.h>

int main() {
    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("enter the first number: ");
    scanf("%lf", &num1);

    printf("enter sencond operator: ");
    scanf(" %c", &operator);

    printf("enter the second number: ");
    scanf("%lf", &num2);

    switch(operator){
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
            result = num1 / num2;
            break;    
        default:
            ("invalid operator\n");     
    }

    printf("result: %.4lf", result);

    return 0;
}