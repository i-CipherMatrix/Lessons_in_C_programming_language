#include <stdio.h>
#include <math.h>

int main()
{
    char operator;
    float num1;
    float num2;
    float result;

    printf("Select operator ([+] [-] [*] [/] [^]: ");
    scanf("%c", &operator);

    printf("Enter the first digit: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("%.0f %c %.0f = %f", num1, operator, num2, result);
            break;
         
        case '-':
            result = num1 - num2;
            printf("%.0f %c %.0f = %f", num1, operator, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("%.0f %c %.0f = %f", num1, operator, num2, result);
            break;

        case '/':
            result = num1 / num2;
            printf("%.0f %c %.0f = %f", num1, operator, num2, result);
            break;

        case '^': //faulty
            result = pow(num1, num2);
            printf("%.0f %c %.0f = %f", num1, operator, num2, result);
            break;
    

        default:
            printf("%c is not a valid operator", operator);
    }
}