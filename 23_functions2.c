#include <stdio.h>

// ARGUMENTS AND PARAMETERS
//functions don't see inside other functions as you can see in this instance

void switchstate(char color[], int time){ //parameters are what this function needs to be executed
    printf("Display %s\n", color);
    printf("Flash for %d seconds\n", time);
}

int main(){
    char color[] = "Red";
    int time = 5;
    
    switchstate(color, time); // the switchstate function called here is not aware of the color and time
                              // we make the switchstate function invoked here to be aware of the color and time by passing them as arguments    (separated by a comma) in the invoked function. ASK OF THE VARIABLES OVER THE PHONE
                             // the passed variables are known as ARGUMENTS but we need a matching set of parameters within the function declaration
                             // these parameters are exported to the main function to become the arguments of the function invocation, the guys asked about over the phone
                             // the parameters called passed out in the function declaration are prefixed with their type names  

    return(0);
}

