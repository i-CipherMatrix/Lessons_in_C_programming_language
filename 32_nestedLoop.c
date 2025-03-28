#include <stdio.h>
// Nested Loop
int main(){
    // nested loop = a loop inside another loop; a situational occurence

    // program to print a rectangle of symbols for a user-specified number of times

    int rows;
    int column;
    char symbol;

    printf("Enter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &column);   // when we hit enter for this there is an automatic \n buffer added too
                            // the symbol scanf picks up this buffer, so we have to clear the new line buffer
    scanf("%c"); // so we introduce another character to clear this buffer (one of the ways of doing so)

    printf("Enter symbol: ");
    scanf("%c", &symbol);

    // we use for loops to control the printing
    // the outer for loop controls the rows and the inner for loop controls the column


    //there's a problem with the column calculation that makes it print 10 everytime, solve later

    for(int i = 1; i <= rows; i++){     // to escape one iteration of out outer loop we have to escape the iteration of our inner loop
        for(int j = 1; j <= column; j++){   // that means the inner loop must have run its course for the outer loop to continue its loop
            //printf("*");         // once the loop conditions of the inner loop is no longer true, it the loop is escaped and outer loop continues
            printf("%c", symbol); // once we begin another iteration of the outer for loop, we are stuck back with the inner for loop again
        }
        printf("\n");
    }
    // nested loops work like a gear in a gear, on its quest to complete a cycle, the outer gear turns, transmits motion to the inner gear and wait for the inner gear to  complete one cycle then the outer gear continues its cycle 

    return 0;
}