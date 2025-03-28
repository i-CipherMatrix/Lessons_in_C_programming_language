#include <stdio.h>

int main(){
    int row;
    int column;
    int step = 1;
    int initColumn = 2;

    printf("Enter row #: ");
    scanf("%d", &row);
    printf("Enter column #: ");
    scanf("%d", &column);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%-3d", step);
            step+=column;
        }    
        printf("\n");
        step = initColumn++;
    }
    
    return 0;
}
/*
1 4 7
2 5 8
3 6 9

1 5 9 13
2 6 10 14
3 7 11 15
4 8 12 16
*/