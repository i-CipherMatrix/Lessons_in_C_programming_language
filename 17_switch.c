#include <stdio.h>

int main()
{
    // It is not good practice to use so many consecutive if statements so the 'switch' statement is used instead
    // The switch statement is used = A more efficient alternative to using the 'else if' statement
    //                                Allows a value to be tested for equality against many cases

    // Syntax: switch (value to be examined for equality) {comparison conditions}

    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Excellent!");
            break;
        
        case 'B':
            printf("Very Good!");
            break;

        case 'C':
            printf("Good!");
            break;

        case 'D':
            printf("Fair!");
            break;

        case 'F':
            printf("Failed!");
            break;

        default:
            printf("Please enter a valid grade.");
    }

    // breaks are used to exit the switch cases. It continues executing each case after the other

    return (0);
}