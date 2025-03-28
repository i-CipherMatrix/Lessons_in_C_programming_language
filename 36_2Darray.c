#include <stdio.h>

int main(){
    /* 2D-array = an array where each element is an array
    //            useful if you need a matrix, grid, or table of data

    // let us begin with creating a simple 1D-array initialized with numbers elements..

    int number[] = {1, 2, 3};   // if you want to store a grid or matrix of data, these elements will be the first row

    // A second row can be added thus...
    int numbers[][] = {{1, 2, 3}, {4, 5, 6}};  // for this we'll precede the straight bracket at declaration with another

    // This is now a 2D-array. But with 2D-array, we have to specify a maximum size of elements within this array
int numbers[/*not necessary but you can specify no. of 2D-arrays (rows)][/*e.g. each of the array will have a size 3bytes each] = {{1, 2, 3}, {4, 5, 6}};

    // specifying the no. of 2D-array indicate how many (or the highest) matrix 'row' positions an element can assume
    
    int numbers [rows][column];
    int numbers[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // for better visualization..

    int numbers[2][3] = {
                          {1, 2, 3}, 
                          {4, 5, 6}
                        };*/

    /* one can declare a 2D-array but not assign a value quite yet, e.g. in cases where the values are not known ab initio, see...

    int numbers[2][3];
    // the assignment..
    // numbers[row no.][column no.] = n; // just like in matrix
    numbers[0][0] = 1; // because computers start from 0, in matrix arithmetic =  row1/column1
    numbers[0][1] = 2; // in matrix arithmetic =  row1/column2
    numbers[0][2] = 3; // in matrix arithmetic =  row1/column3
    numbers[1][0] = 4; // in matrix arithmetic =  row2/column1
    numbers[1][1] = 57; // in matrix arithmetic =  row2/column2
    numbers[1][2] = 6; // in matrix arithmetic =  row1/column2

    // we use nested loop to display the elements of an array

    for(int i = 0; i < 2; i++){ // (using an index of i; i is less than no. of rows; i increment); This controls the rows
        for(int j = 0; j < 3; j++){ // (using an index of j; j is less than no. of columns; j increment); This controls the columns
            printf("%d ", numbers[i][j]);    // i & j indicate the positions, the numbers previously assigned to the positions are then printed
        }
        printf("\n"); 
    }*/

    // to dynamically obtain the number of rows and column using the for loop
    int numbers[3][3];

    // the question is how do you get the number of rows and columns even when the values are changed down the line, we use the sizeof method
    int rows = sizeof(numbers) / sizeof(numbers[0]); // sizeof(entire size of our 2D-array) / sizeof(one of our rows)
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]); ; // sizeof(first row) / sizeof(one of the elements found within the first row)

    printf("rows = %d\n", rows);
    printf("column = %d\n", columns);

    numbers[0][0] = 1; // because computers start from 0, in matrix arithmetic =  row1/column1
    numbers[0][1] = 2; // in matrix arithmetic =  row1/column2
    numbers[0][2] = 3; // in matrix arithmetic =  row1/column3
    numbers[1][0] = 4; // in matrix arithmetic =  row2/column1
    numbers[1][1] = 57; // in matrix arithmetic =  row2/column2
    numbers[1][2] = 6; // in matrix arithmetic =  row1/column2
    numbers[2][0] = 10; 
    numbers[2][1] = 20; 
    numbers[2][2] = 30; 

    for(int i = 0; i < rows; i++){  // as far as 'i' is less than the number of rows
        for(int j = 0; j < columns; j++){   // as far as 'j' is less than the number of columns
            printf("%d\t", numbers[i][j]);    // i & j indicate the positions, the numbers previously assigned to the positions are then printed
        }
        printf("\n"); 
    }

    return 0;
}