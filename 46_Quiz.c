#include <stdio.h>
#include <ctype.h>

int main(){
    char questions[][150] = {"1. In what year did the C language debut?", 
                             "2. Who was the originator of the C programming language?", 
                             "3. Which language preceeded C?", 
                             "4. Who wrote this program?"};

    char options[][100] = {"A. 1965", "B. 1989", "C. 1972", "D. 1975", 
                           "A. Jack Hoffman", "B. Dennis Ritchie", "C. James Bauermann", "D. Charles Babbage", 
                           "A. Linux", "B. FORTRAN", "C. COBOL", "D. B", 
                           "A. Charlie Cipher", "B. Ademola Lookman", "C. Bro", "D. Mark Zuckerberg"};

    char answers[5] = {'C', 'B', 'D', 'A'};

    int numberofquestions = (sizeof(questions)/sizeof(questions[0]));

    char guess;
    int score = 0;
    char clearbuffer;

    printf("QUIZ GAME\n");

    for(int i = 0; i < numberofquestions; i++){
        printf("*************************\n");
        printf("%s\n", questions[i]);
        printf("*************************\n");

        for(int j = (i * 4); j < (i * 4) + 4; j++){
            printf("%s\n", options[j]);
        }

        printf("Answer: ");
        scanf("%c", &guess); // we have the newline xter within the scanf buffer
        scanf("%c", &clearbuffer); // clear \n from input buffer

        guess = toupper(guess);

        if(guess == answers[i]){
            printf("CORRECT!\n");
            score++;
        }else{
            printf("WRONG!\n");
        }
    }

    printf("*************************\n");
    printf("FINAL SCORE %d/%d\n", score, numberofquestions);
    printf("*************************\n");

    return 0;
}

