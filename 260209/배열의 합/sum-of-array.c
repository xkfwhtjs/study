#include <stdio.h>

int main() {
    int matrix[4][4]={0};
    int total;
    for (int i =0; i<4; i++){
        for(int j= 0; j<4; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i =0; i<4; i++){
        total = 0;
        for(int j= 0; j<4; j++){
            total = total + matrix[i][j];
        }
        printf("%d\n", total);
    }
    return 0;
}