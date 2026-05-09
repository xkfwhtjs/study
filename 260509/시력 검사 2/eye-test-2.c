#include <stdio.h>

int main() {
    float n;
    scanf("%f", &n);
    if(n>=1.0){
        printf("High");
    } else if(n>=0.5 && n<1.0){
        printf("Middle");
    } else {
        printf("Low");
    }
    // Please write your code here.
    return 0;
}