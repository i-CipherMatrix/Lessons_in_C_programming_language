#include <stdio.h>

int main(){
    // continue = skips a section of the loop and forces the next iteration of the loop
    // breaks = exits a loop/switch... breaks entirely from the code. Also used in switch statement

    for(int i = 1; i <= 20; i++){
        if(i == 10){
            //continue;   // skips 10 and continue with the iteration
            break;  // break off the iteration once it is 10
        }
        printf("%d\n", i);
    }

    return 0;
}