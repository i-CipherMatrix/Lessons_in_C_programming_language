#include <stdio.h>

int main()
{
    //format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %N.1 = left align

    float egg = 2.55;
    float milk = 10.00;
    float bread = 100.98;

    printf("The price of egg is: $%f\n", egg);
    printf("The price of egg is :$%0.2f\n", egg);
    printf("The price of milk is :$%0.2f\n", milk);
    printf("The price of bread is :$%0.2f\n\n", bread);

    //Using formatSpec to define in minimum fieldwidth
    printf("Item 1: $%8.2f\n", egg);
    printf("Item 2: $%8.2f\n", milk);
    printf("Item 3: $%8.2f\n\n", bread);

    //using formatSpec to left-align the minimum fieldwidth
    printf("Item 1: $%-8.2f\n", egg);
    printf("Item 2: $%-8.2f\n", milk);
    printf("Item 3: $%-8.2f\n", bread);


    return(0);
}