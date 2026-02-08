#include <stdio.h>

int main() {
    int matrix1[3][3] = {0};
    int matrix2[3][3] = {0};
    int matrix3[3][3] = {0};   

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matrix1[i][j]);
        }
    } 

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matrix3[i][j] = matrix1[i][j] * matrix2[i][j];
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }     
    // Please write your code here.
    return 0;
}