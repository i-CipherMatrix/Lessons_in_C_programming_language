#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logical operators '&&' checks if two conditions are true

    float temp = 20;
    bool sunny = true; //change to false

    if(temp >= 0 && temp <= 30 && sunny == true){
        // if you are checking the value of a boolean, you don't necessarily have to specify the true or false. // you can just say sunny = 1, or just 'sunny' the variable already contains the boolean property
        printf("The weather is good!"); 
    }
    else{
        printf("The weather is bad!");
    }
}