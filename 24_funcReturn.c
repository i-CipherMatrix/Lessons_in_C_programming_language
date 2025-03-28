#include <stdio.h>

// The Return statement: returns a value back to the calling function

double square(double x){     // declare the function with the datatype of the returning variable
    //double result = x * x; // or...
    return x * x;
}

int main(){
    double x = square(12);
    printf("Result = %lf", x);

    return(0);
}