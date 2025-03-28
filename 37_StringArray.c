#include <stdio.h>
#include <string.h>

int main(){
    /* 
    char phones[2][10] = {{"Nokia", "iPhone", "Infinix"}, {"Samsung", "Redmi", "Tecno"}}; // This is basically a 2D array of individual xters only that each xter here is a string! 
    // a string is already an array so the max size '10' kinda specify the no. of xters

    the above declaration won't work because...
    char phones[] = "Redmi" // this declares a string array of size 5 (including the null terminator). The null terminator means that you count the number of xters normally 1-5, but computers start from 0 through 4

    char phones[][10] = {"Redmi", "Tecno"} // this initializes only one row of string arrays each containing a max of 10 characters
                                           // this is the 2D equivalent of string arrays unlike ints that are single units translating to x/y axis in 2D array configuration. 
                                           // REMEMBER: You can choose not to specify the number of rows
    // to print a matrix of string arrays will require a 3D configuration. See comment below the main function
    */

    // for a 2D string array we have...

    char phones[7][10] = {"Redmi", "Infinix", "iPhone", "Tecno", "Nokia", "Oracle"}; // REMEMBER: You can choose not to specify the number of rows but if you do specify it should not be <= '6' (+1 is added above for the null terminator)

    // Now we can't directly assign a new value to the array outside the ones already spelled out, see...
    // phones[0] = "Gtech"; // this throws an error immediately saying 'expression must be a modifiable value'. You can't modify strings as you do numbers

    // What we can do is that we can overwrite a particular element of the string array using the strcpy function and to do this, we add the string header

    strcpy(phones[5], "Lenovo"); // this overwrites the specified element of the string

    for(int i = 0; i <= sizeof(phones)/sizeof(phones[0]); i++){
        printf("%s \t", phones[i]); // print array contents for 'i' members of the 2D string-array
        }

    return 0;
}

/*
1. Problem: Incorrect Array Declaration

char phones[2][10] = {
    {"Nokia", "iPhone", "Infinix"},
    {"Samsung", "Redmi", "Tecno"}
};

What This Actually Means

    phones[2][10] allocates 2 "rows," each of which can store 10 characters (including the null terminator).
    In other words, you only have space for 2 strings total, each up to 9 characters long.

However, your initializer tries to store 6 strings ("Nokia", "iPhone", "Infinix", "Samsung", "Redmi", "Tecno"). This is not valid for a 2×10 char array. You’re effectively trying to cram 6 strings into just 2 available slots.
How to Fix It

You have two common approaches:
Option A: Use a 3D Character Array

If you want to store 2 rows, each containing 3 strings, each string up to 9 characters (plus \0), do:

char phones[2][3][10] = {
    {"Nokia", "iPhone", "Infinix"},
    {"Samsung", "Redmi", "Tecno"}
};

    Now you have 2 rows × 3 columns = 6 strings, each with room for 10 characters.

Option B: Use an Array of Pointers to Strings

Alternatively, you can store pointers to string literals:

char *phones[2][3] = {
    {"Nokia", "iPhone", "Infinix"},
    {"Samsung", "Redmi", "Tecno"}
};

    Each entry phones[i][j] is a char * pointing to a string literal.
    You don’t need to worry about the length (as the literals reside in read-only memory).

2. Problem: Incorrect Loop Bounds

for(int i = 0; i <= sizeof(phones)/sizeof(phones[0]); i++) {
    for(int j = 0; j <= sizeof(phones[0])/sizeof(phones[0][0]); j++) {
        printf("%s \t", phones[i][j]);
    }
}

What’s Wrong

    Using <= goes out of bounds. You typically want < instead of <=.
    sizeof(phones)/sizeof(phones[0]) calculates how many “rows” you have, but it only works correctly if phones is a true 3D array or a 2D array of pointers. With your current definition, it doesn’t match your intended usage (since you only have 2 “rows” in phones, not 6).

How to Fix It

If you use Option A (char phones[2][3][10]):

// 2 rows, 3 columns of strings
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%s\t", phones[i][j]);
    }
    printf("\n");
}

If you use Option B (char *phones[2][3]):

// 2 rows, 3 columns of pointers to strings
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%s\t", phones[i][j]);
    }
    printf("\n");
}

3. Putting It All Together
Option A (3D char array)

#include <stdio.h>

int main() {
    char phones[2][3][10] = {
        {"Nokia", "iPhone", "Infinix"},
        {"Samsung", "Redmi", "Tecno"}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%s\t", phones[i][j]);
        }
        printf("\n"); // New line after each row
    }
    return 0;
}

Option B (Array of Pointers to char)

#include <stdio.h>

int main() {
    char *phones[2][3] = {
        {"Nokia", "iPhone", "Infinix"},
        {"Samsung", "Redmi", "Tecno"}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%s\t", phones[i][j]);
        }
        printf("\n");
    }
    return 0;
}

Conclusion

    Your original code tries to store 6 strings in a 2×10 array, which only holds 2 strings, each up to 9 characters.
    The loop bounds also go out of range and incorrectly use <=.
    By using either a 3D array or an array of pointers (and fixing the loops), you can store and print all 6 phone names successfully.
*/