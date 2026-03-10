#include <stdio.h>

int main() {
    int a=5, b=6, c=7;
    int temp;
    temp = a;
    a = c , c=b, b=temp;
    printf("%d\n%d\n%d",a,b,c);
    // Please write your code here.
    return 0;
}