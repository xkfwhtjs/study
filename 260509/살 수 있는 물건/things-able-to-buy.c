#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>=3000){
        printf("book");
    } else if (n<3000 && n>=1000){
        printf("mask");
    } else {
        printf("no");
    }
    // Please write your code here.
    return 0;
}