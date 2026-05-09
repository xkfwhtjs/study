#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    char *test;
    scanf("%d",&n);
    test = n ==100 ? "pass" : "failure";
    printf("%s",test);
    return 0;
}