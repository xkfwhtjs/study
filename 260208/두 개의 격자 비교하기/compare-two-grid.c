#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int matrix1[a][b];
    int matrix2[a][b];


    for (int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

     for (int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

     for (int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            if(matrix1[i][j] == matrix2[i][j]){
                printf("0 ");
            } else{
                printf("1 ");
            }
        }
        printf("\n");
    }

    // Please write your code here.
    return 0;
}