#include <stdio.h>

int main(){
    FILE *pF = fopen("/mnt/c/Users/User/Desktop/AI.txt", "r"); // 1. gets the file, in 'read mode'

    //3. We'll need a 'buffer'
    // The buffer is going to act as a container, an array of xters to hold one line of our file at a time
    // we declare the buffer....
    char buffer[1000];

    // 4. to read the contents of our buffer, we use the fgets function
    //fgets(buffer, 1000, pF); // 3 arguments: buffername, max display limit, pointer to the file

    // the above reads only a single line from our doc..
    // to display the content of the buffer, we...
    //printf("%s", buffer);

    /* 5. to read the entire document, we have to place the fetch and display function calls within a while loop, (un)comment them above
    while(fgets(buffer, 1000, pF) != NULL){ // as far as we do not reach the end of the document, fgets returns NULL at the end of its buffer
        printf("%s\n", buffer);
    }*/

    // 6. We cann implement a file detection feature for the file using an if statement
    if(pF == NULL){
        printf("File not found.");
    }else{
        while(fgets(buffer, 1000, pF) != NULL){
            printf("%s\n", buffer);
        }
    }

    fclose(pF); // 2. Remember to not dereference it

    return 0;
}