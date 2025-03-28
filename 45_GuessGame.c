#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    // Seeds the random number using current time
    srand(time(0));

    //printf("%d\n", rand()); // REMEMBER: This prints up to not less than 9 digits 

    answer = (rand() % MAX) + MIN;  // keeps the generated number < MAX + MIN

    printf("GUESS GAME\n");

    do{
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess > answer){
            printf("Too high!\n");
        }
        else if(guess < answer){
            printf("Too low!\n");
        }else{
            printf("CORRECT!\n");
        }
        guesses++;
    }while(guess != answer);

    printf("\n************************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("************************\n");

    return 0;
}