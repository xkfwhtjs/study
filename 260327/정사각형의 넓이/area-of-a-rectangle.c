#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    if(n<=4){
        printf("%d\ntiny",n*n);

    }else{
        printf("%d",n*n);
    }
    return 0;
}