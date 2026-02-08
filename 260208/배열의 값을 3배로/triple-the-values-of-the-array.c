#include <stdio.h>

int main() {
    int x=3,y=3;
    int matrix[3][3] = {0};
    for(int i=0; i<x; i++ ){
        for(int j=0; j<y; j++){
            scanf("%d", &matrix[i][j]); 
        }
    }

   for(int i=0; i<x; i++ ){
        for(int j=0; j<y; j++){
            printf("%d ", matrix[i][j]*3); 
        }
        printf("\n");
    }
    // Please write your code here.
    return 0;
}