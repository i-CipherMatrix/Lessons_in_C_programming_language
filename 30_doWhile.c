#include <stdio.h>

int main(){

    // while loop = checks a condition THEN executes the code block if condition is true
    // do while loop = always executes a block of code once, THEN checks a condition

    // demonstrating this with a program that allows users to input a number as far as it is above 0 and then we find the sum

    int num = 0;
    int sum = 0; //to keep track of the sum

    /*Uncomment this to run the while statement..

    while(num > 0){
        printf("Enter a # above '0': ");
        scanf("%d", &num);
        if(num > 0){
            sum = sum + num;
        }
    }

    printf("sum: %d", sum);*/

    // since while loop checks the condition first, 0 is already assigned to 'sum' so it doesn't execute the block of code and goes straight to the print statement
    // a do while loop checks the condition last

    //let us implement the do while loop, putting it last after the curly brace

    do{
        printf("Enter a # above '0': ");
        scanf("%d", &num);
        if(num > 0){
            sum = sum + num;
        }
    }while(num > 0);

    printf("sum: %d", sum);


    return(0);
}