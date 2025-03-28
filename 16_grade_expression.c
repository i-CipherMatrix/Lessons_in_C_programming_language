#include <stdio.h>

int main()
{
    int i;
    i = (0 <= i >= 100);

    printf("Enter your Grade: ");
    scanf("%d", &i);

    if(i >= 70){
        printf("Excellent! You have an 'A'\n");
    }

    else if(60 <= i && i >= 69){
        printf("Good! You have a B");
    }

    else if(50 <= i && i >= 59){
        printf("Nice! You have a C");
    }

    else if(40 <= i && i >= 49){
        printf("Not bad! You have a D");
    }

    else if(30 <= i && i >= 39){
        printf("You have an E!");
    }

    else if(0 < i && i >= 20){
        printf("Sorry, You failed.");
    }

    else{
        printf("Enter a valid score!");
    }

    /*char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    if(grade == 'A'){
        printf("Excellent! You have an 'A'!");
    }

    else if(grade == 'B'){
        printf("Very Good. You have a 'B'!");
    }

    else if(grade == 'C'){
        printf("Good. You have a 'C'!");
    }

    else if(grade == 'D'){
        printf("Fair. You have a 'D'!");
    }

    else if(grade == 'E'){
        printf("Narrowly missed. You have an 'E'!");
    }

    else if(grade == 'F'){
        printf("Sorry. You failed!");
    }

    else{
        printf("Enter a valid grade.");
    }*/

    return (0);
}