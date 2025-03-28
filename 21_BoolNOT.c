#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logical operator ! (NOT) reverses the state of a condition
    
    bool switch_ON = true;

    if(!switch_ON){
        printf("Lights Off!");
    }

    else{
        printf(" Lights On!");
    }

    return(0);
}