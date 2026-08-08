#include <stdio.h>

int main() {
    float left,right;
    scanf("%f %f", &left, &right);
    if(left>=1.0 && right>=1.0){
        printf("High");
    }else if(left>=0.5&& right>=0.5){
        printf("Middle");
    }else{
        printf("Low");
    }

    // Please write your code here.
    return 0;
}