#include <stdio.h>

int main()
{
    int age;

    // if statements are used to add choices to programs
    // SYNTAX: if(premises) {curly braces}
    //         if(some condition specified is true) {execute some block of code or subsection of a code}
    // On comparisons: >= , <= , == check if two variables are equal

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are now signed up!");
    }
    // you can check more than one condition/statement before your else statement by using the else if..

    else if(age == 0){
        printf("You can't sign up! You have just been born!");
    }
    
    else if(age <= 0){
        printf("You haven't been born yet!");
    }

    else{
        printf("You are too young to sign up!");
    }
}