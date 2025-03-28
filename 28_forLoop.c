#include <stdio.h>

int main(){
    // for loop = repeats a section of a code a specified limited amount of time
    // SYNTAX: for(counter, limit, increment/decrement)

    //for(int index = 1; index <= 10; index++){       // N.B. The ';' is used to close off the statements not ','

    //for(int i = 1; i <=10; i++){                      // common practice is that index is shortened to 'i'

        // printf("You\n");    // count upwards, for each time the int i is less than 10, print 'You'
        // if you do not the increment/decrement the counter, the loop runs infinitely
        // the limit i <=10 is how long shall we keep repeating this code
        // you can change the increment/decrement steps like this ' i+=2, i+=3,' increases the counter in leaps of 'n'

    //for(int i = 1; i <=10; i+=2){
    for(int i = 10; i >= 1; i-=2){
        printf("%d\n", i); // the code you'll like to repeat
    }
    return(0);
}