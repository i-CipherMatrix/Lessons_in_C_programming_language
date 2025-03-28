#include <stdio.h>
// function protypes
// WHAT IS IT?
// Function declaration, w/o a body, before the main() function
// Ensures that calls to a function are made with the correct arguments

// IMPORTANT NOTES
// Many C compilers do not check for parameter matching
// Missing argument will result in unexpected behaviour
// A function prototype causes the compiler to flag an error if the argument is missing

void sensorCal(char[], int); // function prototype; it ensures that calls to a function are made with the correct arguments
                             // without the function prototype, missing arguments will result in unexpected behaviour

int main(){
    char state[] = "HIGH";
    int speed = 360;

    sensorCal(state, speed); // with the function  prototype in place, the program doesn't run until all arguments are supplied

    return(0);
}

void sensorCal(char state[], int speed){ //void is the default return datatype for a function
    printf("SENSOR STATE: %s", state);
    printf("\nSENSOR SPEED: %d", speed);
}

// ADVANTAGES
// 1. It makes it easier to navigate a program when main() is at the top. One function prototype for each function asides the main function
// 2. Helps in debugging
// 3. It is commonly used in header files