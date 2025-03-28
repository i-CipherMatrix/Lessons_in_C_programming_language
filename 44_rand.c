#include <stdio.h>
#include <stdlib.h>
#include <time.h> // allows us to use the current time of the machine
// Program to generate (pseudo)random numbers

int main(){
    // pseudo-random numbers = a set of values or elements that are statistically random
    //                       DISCLAIMER: Don't use this for any sort of cryptographic security

    // 1. use the current time to generate a seed which we need for random numbers
    // to do these we use the seed-random 'srand' function and pass in the time as its argument
    srand(time(0)); // so we use the current time as a seed for random numbers

    // 2. we use the rand function to generate a random number with the seed, let's store the random number in the variable number1...
    //int number1 = rand(); // this generates a number between 0 - 32,767

    // if we don't want to output a number that large, we can use modulus and the max number that we like, say in a dice..
    int number1 = (rand() % 6) + 1; // the modulus number gives you the remainder of any division. and this one outputs between 0 and 1 because 
                                    // computers start with 0, so you add 1 to make the remainders' limit = 6
    // You can generate a batch of rand numbers at a time...
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}

// MODULUS '%' DIVIDES A NUMBER TO THE LEAST DIVISIBLE RESULT, THE REMAINDER AT THIS POINT IS ALWAYS LESS THAN THE MODULUS NUMBER
// MODULUS IS LIKE PERFORMING LONG DIVISION
// INCREASE THE MODULUS NUMBER TO INCREASE THE LIMIT OF THE GENERATED RANDOM NUMBERS