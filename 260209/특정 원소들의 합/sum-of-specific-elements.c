#include <stdio.h>

int main() {
    int matrix[4][4]={0};
    int total=0;

    for (int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i=0; i<4; i++){
        for(int j=0; j<=i; j++){
            total = total + matrix[i][j];    
        }
    }

    printf("%d", total);
   
    // Please write your code here.
    return 0;
}