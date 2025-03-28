#include <stdio.h>
//Program to write to a file in C

int main(){
    // 1. We initialize a pointer to a file of the Datatype 'FILE'
    //FILE *pF = fopen("latin.txt", "w"); // the file extension can be chaged to say e.g. html. The fopen function takes a second argument called 'modes' which could be w = write; r = read; a = append;
    //FILE *pF = fopen("latin.txt", "a"); 

    // 3. to write a line of text to our file, we can do this....
    //fprintf(pF, "Caesar Maximus\n"); // do not dereference the pointer; you're writing to the house in the address

    // 4. if we change the text with the file still in write mode, it overwrites the content of the file
    //fprintf(pF, "Virgil Aeneid\n"); // comment no. 3 fprintf

    // 5. We change the 'w' in the fopen statement to 'a' to append a text
    //fprintf(pF, "\nPoseidon Hades"); // appends/adds this text to the file

    // 2. it is good practice to close any file that is open so we use...
    //fclose(pF); // REMEMBER not to dereference it

    /* 6. to delete a file....
    if(remove("latin.txt") == 0){ // we pass in the remove method
        printf("File deleted successfully!\n");
    }else{
        printf("File not found\n");
    }*/

    // 7. we can write any file to any path using two methods
    // a. a Relative file path
    // b. an absolute file path
    // The absolute file path looks like this: c/Users/User/Desktop/C_Lessons/Cexcercises (you can see this in a folder's location info)

    // We precede our file name with the path we want to write it to
    FILE *pF = fopen("/mnt/c/Users/User/Desktop/latin.txt", "w"); // Use double backslashes for windows powershell

    fprintf(pF, "O Caesar go into the Capitol");

    fclose(pF);

    return 0;
}