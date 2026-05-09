#include <stdio.h>

int main() {
    // Please write your code here.
    int n,a;
    int max;
    scanf("%d %d", &n, &a);
    max = n>a ? n:a;
    printf("%d",max);
    return 0;
}