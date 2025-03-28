#include <stdio.h>
#include <string.h>

int main(){

    // while loop is used to repeat a section of code possibly unlimited times WHILE the condition remains true
    // a WHILE loop might not execute at all

    char name[25];

    printf("Enter your name: ");

    fgets(name, 25, stdin);
    name[strlen(name) - 1] ='\0';
    
    while(strlen(name) == 0){       //implement name != whitespace
        printf("You did not enter your name!\n");

        printf("Enter your name please: ");

        fgets(name, 25, stdin);
        name[strlen(name) - 1] ='\0';
    }

    printf("Hello %s!\n", name);

    return(0);
}

// there's a lot of overlap where you can use either a while or for loop
// a WHILE loop might not execute at all if the condition is false to begin with