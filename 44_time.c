#include <stdio.h>
#include <time.h>

int main(){
    time_t tempus; // declare the variable now of datatype time_t
    time(&tempus); // fetch the current time and store it in variable 'tempus'
    printf("Current Time: %s", ctime(&tempus));    // print the current time in human readable format

    return 0;
}