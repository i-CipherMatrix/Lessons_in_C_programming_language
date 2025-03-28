#include <stdio.h>

int main()
{
    // arithmetic operations

    // + = addition
    // - = subtraction
    // * = multiplication
    // / = division
    // % = modulus
    // ++ = increment
    // -- = decrement

    int x = 2;
    int y = 5;

    int a = x + y;
    int s = x - y;
    int m = x * y;
    int d = y / x; // gonna give you 'whole number' "2" because you are storing with int
    float d2 = y / x; // this is gonna give you 2.000000. You will have to mutate the type of the divisor thus:

    float x2 = 2;
    float d3 = y / x2;

    //OR
    int x3 = 2; // if you want to maintain the int type, you'll have to append the 'float or double' in the statement:
    float d4 = y / (float) x3; // this is called 'Casting'

    //On MODULUS: Modulus gives you the remainder of any division
    int mod = y % x;

    //also, if:
    int y_new = 4;
    int x_new = 2;
    int z_new = y_new % x_new;

    //On INCREMENT & DECREMENT
    int j = 6;
    int k = 7;
    j++; // just go ahead and call the variable direct
    k--;

    printf("The value of a is %d\n", a);
    printf("The value of s is %d\n", s);
    printf("The value of m is %d\n", m);
    printf("The value of d is %d\n", d);
    printf("The value of d2 is %f\n", d2);
    printf("The value of d3 is %f\n", d3);
    printf("The value of d4 is %f\n", d4);
    printf("The value of mod is %d\n", mod);
    printf("The value of z_new is %d\n", z_new);
    printf("The value of 'j' is %d and the value of 'k' is %d\n", j, k);


    return (0);
}
