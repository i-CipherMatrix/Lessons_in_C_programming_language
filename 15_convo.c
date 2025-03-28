#include <stdio.h>
#include <string.h>

int main()
{
    char foodname[170];
    printf("Hey Babe, what's your favourite meal?\n");
    //scanf("%s", &foodname); //no spaces
    fgets(foodname, 170, stdin); //the fgets allows whitespace in input and automatically enters a new line
    foodname[strlen(foodname)-1] = '\0'; // removes the newline created by the fgets.

    printf("Okay, I'll look around and order your %s. How much worth would you like to buy?\n", foodname);

    int amount;
    scanf("%d", &amount); 
    printf("Alright. Just chill, lemme look around for %s of $%d\n", foodname, amount);

    /*scanf doesn't allow whitespaces in the input so rather we'll use 'fgets'
    char foodname2[170];

    printf("Do you have any alternative in case I don't see %s.\n", foodname);

    fgets(foodname2, 170, stdin);

    printf("I'll get you %s if I can't get %s.", foodname, foodname2);*/

    return(0);
}