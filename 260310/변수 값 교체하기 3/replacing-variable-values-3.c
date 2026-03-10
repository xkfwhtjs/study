#include <stdio.h>

int main() {
    int a=3;
    int b=5;
    int temp;

    temp = a;
    a=b;
    b=temp;
    printf("%d\%d", a,b);
    // Please write your code here.
    return 0;
}