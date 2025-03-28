#include <stdio.h>

// 3. We declare a function to help us sort through the array
void sort(int array[], int size){    // we are not returning any value hence the void type

    // 5. We use a nested loop to iterate through the array
    for(int i = 0; i < size - 1; i++){   //-1 here takes out the null terminator element. Outer loop takes care of the overall iteration
        for(int j = 0; j < size - i - 1; j++){    // takes care of the step by step iteration; for optimization, add -i to the limit...see line30
            // 6. What we are going to do within the loop is to check if the element on the left 
            //    is greater than the element on the right, if so, we swap/interchange them
            if(array[j] > array[j+1]){ // if array at index of j is greater than the array at index of  'j+1'. Reverse the inequality to descend
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;  
            }

        }
    }
}

// 6. We create a 'print' function to display our array
void printArray(int array[], int size){
    for(int i = 0; i < size; i++){  // why was just 'size' used here? And why was'i' declared again here
        printf("%d ", array[i]);    // display our array at index of i.... At index 'i', performs the loop duty, goes over to the next
    }
}

int main(){
    // 1. Initialize array
    int array[] = {9, 7, 8, 1, 5, 2, 3, 4, 6}; // the rationale behind setting the stepwise limit to (j < size(i.e 9) - i - 1) is because 
                                               // depending on the size of the array, the highest number will have to be pushed all the way to the 
                                               // rightmost position (final resting place), because '9' will be examined against all the other 
                                               // numbers to its right. Basically, it is a bubble sort!!!???
    
    // Uncomment the line below and change the affected data type declarations/format-specifiers to sort through xters
    //char array[] = {'F', 'C', 'A', 'D', 'B'};

    // 2. We then calculate the size of array to know how many times we'll iterate through it
    int size = sizeof(array)/sizeof(array[0]);

    // 4. Invoke the function here with its arguments
    sort(array, size);
    printArray(array, size);

    return 0;
}