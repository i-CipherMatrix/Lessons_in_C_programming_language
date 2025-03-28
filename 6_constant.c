#include <stdio.h>

int main()
{
    // constant - a fixed that cannot be altered by the program during its execution
    //Example

    float pi = 3.14159;
    pi = 420.89898; //the updated value of pi is now printed
    printf("the value of pi %.5f\n", pi);

    //Example to implement a constant
    const float SIGMA  = 6.67; // good practice to make constants capital letter
    //SIGMA = 5.50; // now flashes error for the repeated constant. Uncomment the beginning of the line to see it (for vs-code)
    printf("the value of sigma is %0.2f\n", SIGMA);

    return(0);
}