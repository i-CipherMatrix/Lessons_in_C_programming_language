#include <stdio.h>

// 2. enum can be created in/outside the main function. Example...
//enum Day{Sun, Mon, Tue, Wed, Thu, Fri, Sat}; // enums are constants, and the elements defined within are constants
                                             // the elements are indexed from zero by default but you can set them to a specific int
enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main(){
    // 1. enum = 'enumeration' a user defined type of named integer identifier
    //           helps to make our programs more readable

    // 3. To use the created enum...Syntax: enum Day(kinda the datatype) today(variable name)
    enum Day today = Thu;   // enums are not strings but are treated as strings

    // NOTE: enums are treated as integers and not strings
    //printf("%d\n", today);

    /* How does it make a program more readable
    if(today == 2 || today == 4){
        printf("You have Math today!\n");
    }else{
        printf("No Maths!\n");
    }*/

    // the ints '2' and '4' may not make complete sense to someone that's reading your code so you can replace them with the enum element names
    if(today == Mon || today == Wed){
        printf("You have Math today!\n");
    }else{
        printf("No Maths! :(\n");
    }

    // in essence what enum helps do is that it creates an array of ints assigned or prededicated to a variable. To increase readability!

    return 0;
}