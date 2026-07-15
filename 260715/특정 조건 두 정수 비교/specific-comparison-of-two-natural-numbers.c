#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if(a<b){
        printf("1\t");
    } else{
        printf("0\t");
    }
    if(a==b){
        printf("1\t");
    }else{
        printf("0");
    }
    // Please write your code here.
    return 0;
}