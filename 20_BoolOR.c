#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logical operator OR checks if at least one condition is true
    
    /*bool STATE_1 = true;
    bool STATE_2 = true;
    bool STATE_3 = true;

    if(STATE_1 == true || STATE_3 == true && STATE_3 == false){
        printf("LOW");
    }

    else if(STATE_1 == true && STATE_3 == true){
        printf("LOW");
    }

    else{
        printf("LOW");
    }*/

    float temp = 26; // change this value to test

    if(temp <= 0 || temp >= 30){
        printf("The weather is bad");
    }
    else{
        printf("The weather is good.");
    }

    return (0);
}