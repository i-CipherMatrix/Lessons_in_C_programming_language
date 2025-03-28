#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "Cipher";
    char string2[] = "Corp";
    char string3[] = "Cipher";
    char string4[] = "Hondor";
    char string5[] = "Ciphor";
    char string6[] = "CIPHER";
    char string7[] = "CIPHOR";

    //strlwr(string1);                //converts all xters of the string to lowercase
    //printf("%s\n", string1);

    //strupr(string2);                // converts all xters of the string to uppercase
    //printf("%s\n", string2);

    //strcat(string1, string2);       // appends string2 to the end of string1
    //printf("%s", string1);

    //strncat(string1, string2, 2);
    //printf("%s\n", string1);

    //strcpy(string1, string2);         // overwrites the contents of string1 with string2
    //printf("%s\n", string1);

    //strncpy(string1, string2, 4);      // copies the first n xters of string2 to the beginning of string1
    //printf("%s", string1);             // if the entire n of string2 xters is less than string1, the function behaves as strcpy

    // MORE....

    //strset(string1, '*');            // sets all xters of a string to a specified 'xter'
    //printf("%s", string1);

    //strnset(string1, '$', 2);           // sets the first n xters of a string to a specified 'xter'
    //printf("%s\n", string1);

    //strrev(string1);                    // reverses a string
    //printf("%s", string1);

    // FURTHERMOREE.....
    //int result = strlen(string1);          // returns string length as an int. Use the if statement to check
    //printf("%d", result);

    //int result = strcmp(string1, string3);  // compares xters within two strings e.g. C for C, i for i ....etc
    //printf("%d\n", result);                // gives you 0 if the two strings have the matching xters (word) else shows no. str1 differs from str2

    //int result = strncmp(string1, string5, 4); // compares first n number of xters from both strings for matching-ness. Use if/else to check

    //int result = strcmpi(string1, string6);     // does the same thing as strcmp except that it ignores cases. Use if/else to check

    int result = strnicmp(string1, string7, 4);     // does the same thing as strncmp except that it ignores cases. Use if/else to check
     
    if(result == 0){
        printf("Same length of characters\n");
    }

    else{
        printf("Not the same length");
    }

    return(0);
}

// still a lot more string functions inside <string.h> but we'll have to understand how pointers work