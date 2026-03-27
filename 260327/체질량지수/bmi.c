#include <stdio.h>

int main() {
    int height,mass,bmi=0;
    scanf("%d %d",&height, &mass);

    bmi = 10000*mass / (height*height);

    if(bmi >25){
        printf("%d\nObesity",bmi);
    }else {
        printf("%d",bmi);
    }
    // Please write your code here.
    return 0;
}