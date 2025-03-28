#include <stdio.h>
#include <ctype.h> // we'll be using string functions, many of them are found in this ctype header

int main()
{
    char unit;
    float temp;

    printf("Enter temperature unit [C/F]: ");
    scanf("%c", &unit);

    unit = toupper(unit); // passes a lower case input to upper case.
                          // tolower for passing lower case to lower case.

    if(unit == 'C'){
        printf("Enter the unit in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temperature in Fanreheit is: %.2f F", temp);
    }

    else if(unit == 'F'){
        printf("Enter the unit in Fanreheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temperature in Celsius is: %.2f C", temp);
    }

    else{
        printf("'%c' is not a valid temperature unit.", unit);
    }

    return (0);
}