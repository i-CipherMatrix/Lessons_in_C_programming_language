#include <stdio.h>

int main ()
{
    //taking input in C

    int voltage;
    char issue[25]; // creating a string of 30bytes

    printf("Hi! I am Eon, your home assistant, please input the voltage of the bulb.\n");
    scanf("%d", &voltage); //addressof operator
    
    printf("\nCan you tell me the particular issue with it?\n");
    scanf("%s", &issue); // you can take out the addressof operator for string

    printf("I see, the bulb's voltage is %dV. ", voltage); // the '%d' format-specifier here functions as a placeholder
    printf("Here's a solution to the %s issue.\n", issue);

    return (0);
}