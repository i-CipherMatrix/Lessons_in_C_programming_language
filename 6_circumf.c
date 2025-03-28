#include <stdio.h>

int main()
{
    const double PI = 3.1427;
    double r = 7;
    
    double circumference = (2 * PI * r);

    printf("Circumference = %0.4lf", circumference);

    return(0);
}