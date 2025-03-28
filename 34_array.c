#include <stdio.h>

int main(){
    // array  = a data structure used to store multiple values of the same data type
    // has to be of the same data type e.g...

    //  SYNTAX: float resistances[] = {multiple, values, separated, by, commas} 

    double resistances[] = {110.00, 220.00, 280.00, 390.00, 120.00};

    // just like strings which is an array of individual characters
    char name[] ="Charlie"; // five characters 

    // if we need to access one of our resistances values, we'll have to use and index
    // to demonstrate this let us print one of the numbers in the array...
    
    printf("%.2f Ohms", resistances[3]); // this prints the 4th element of the array(change the index to print the respective element ). Each item in the array is called an 'element'
    // the first element of the array has the index number of '0', the next '1' and so on
    // arrays have a fixed size, the size can't be changed after the program has been compiled

    // another way of initializing an array is specifying the size and then add elements together

    double voltage[3]; // voltage having a size of 3 i.e contain 3 elements + a buffer for the null terminator

    voltage[0] = 220;
    voltage[1] = 330;
    voltage[2] = 440;

    printf("\n%.2lf volts", voltage[2]);

    // Or we could use the two ways...
    double current[7] = {2, 3, 4, 1}; // specify the size, initialize some of the elements and initialize some later

    current[5] = 12;
    
    current[4] = 10;

    printf("\n%.2lf A", current[5]);
    printf("\n%.2lf A\n", current[4]);

    // Summary: you can add the element values of the array right away or later in the program
    // but you need to specify the index number of the element
    // to access a value inside your array, you type your array name followed by an index number kinda a parking spot number


    return 0;
}