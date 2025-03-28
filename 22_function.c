#include <stdio.h>

// A small section of code that is executed whenever we call it (invoke)
// When we compile and run a C program, we begin by invoking the main() function
// it is poor practice to repeat a code more than once so any code that will have to be reused is coded in a function and called as much time as possible

// Outside the main function we create a new function... and call it in the main function

    void lightStates(){
        printf("\nRed light On!\n");
        printf("Yellow light Off!\n");
        printf("Green light Off!\n\n");
    }

    void lightStates2(){
        printf("Red light Off!\n");
        printf("Yellow light On!\n");
        printf("Green light On!\n\n");
    }

    int main()
    {
        lightStates(); // See the parentheses as a pair of telephones talking to each other
        lightStates2();
        lightStates();
    
        return (0);
    }