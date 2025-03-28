#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

// 3. Global variables
char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = '0';

// 1. First invoke the fn prototypes by extension all the fns you'll be needing
void resetBoard();
void printBoard();
int checkFreeSpaces(); 
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main(){
    char winner = ' '; // 4. Set to empty space that takes in the values of the player/computer const

    char response;

    char clearbuffer;

    do{
        winner = ' ';

        response = ' ';

        resetBoard();

        // 4.
        while(winner == ' ' && checkFreeSpaces() != 0){ // i.e there's currently no winner
            printBoard();

            playerMove();
            winner = checkWinner(); // 9.
            if(winner != ' ' || checkFreeSpaces() == 0){ // 11.
                break; // break outta the while loop
            }

            computerMove();
            winner = checkWinner(); // 9.
            if(winner != ' ' || checkFreeSpaces() == 0){ // 11.
                break; // break outta the while loop
            }
        }

        printBoard();
        printWinner(winner);

        printf("\nPlay Again? [Y/N]: ");
        scanf("%c", &clearbuffer);
        scanf("%c", &response);
        response = toupper(response);
    } while(response == 'Y');

    printf("\nArigatou! (:\n");
    
    return 0;
}

// 2. Give body to the functions after you invoke them in main
void resetBoard(){
    for(int i = 0; i < 3; i++){  // controls the rows
        for(int j = 0; j < 3; j++){ // controls the columns
            board[i][j] = ' '; // this resets each array of xter to be an empty space
        }
    }
}
// 3.
void printBoard(){
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]); // Display xters at these indxes
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// 5.
int checkFreeSpaces(){
    int freeSpaces = 9;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(board[i][j] != ' '){ // if the index positions != empty space
                freeSpaces--; // ndecrement no. of freespaces by 1
            }
        }
    }
    return freeSpaces; // if we return 0, means no more places a player can move
}

//6. 
void playerMove(){
    int x;
    int y; // row and colmn no. where a user will like to move to

    // 8. Place code 7 within a do while loop

    do{
        // 7a.
        printf("Enter row #(1-3): ");
        scanf("%d", &x);
        x--; // decremented because the machine starts indexing from 0 not 1

        printf("Enter column #(1-3): ");
        scanf("%d", &y);
        y--;
        
        // 7b. We check if the coordinates the user gave is occupied
        if(board[x][y] != ' '){
            printf("Invalid Move!\n");
        }else{
            board[x][y] = PLAYER;
            break; // breaks out of the while loop
        }
    } while(board[x][y] != ' '); // if the spot selected by the player is occupied, they'll be asked to enter the input again

}
// 12.
void computerMove(){
    // create a seed based on current time
    srand(time(0));
    int x; // random number for row
    int y; // random number for column

    // 13. we check for free space before generating the random number
    if(checkFreeSpaces() > 0){
        do{
            x = rand() % 3;
            y = rand() % 3;
        } while(board[x][y] != ' '); // check if the spot generated is open // Keep on generating random number until there's an open space

        // if we find the open space
        board[x][y] = COMPUTER;
    }else{
        printWinner(' '); // means there's no winner, i.e. it's a draw
    }  
}
char checkWinner(){
    // 10. check winning conditions(rows)
    for(int i = 0; i < 3; i++){ //'i' is an independent checker, index
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2]){
            return board[i][0]; // return xter at index i, 0
        }
    }
    // 10b. check columns
    for(int i = 0; i < 3; i++){
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i]){
            return board[0][i]; // return xter at index 0, i
        }
    }
    // 10c. Check diagonals[L - R]
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2]){
        return board[0][0]; // return xter at index 0, 0
    }
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0]){
        return board[0][2]; // return xter at index 0, 2
    }
    //10d. if after checking all these conditions, there's no winner..
    return ' ';
}

void printWinner(char winner){
    if(winner == PLAYER){
        printf("YOU WIN!");
    }else if(winner == COMPUTER){
        printf("YOU LOSE!");
    }else{
        printf("DRAW!");
    }
}