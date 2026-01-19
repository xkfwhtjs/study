#include <stdio.h>

int main() {
    int a,b;
    int total_cnt=0;
    scanf("%d %d",&a, &b);

    for(int i=a; i<=b; i++){
        int cnt=0;
    
        for(int j = 1; j<=i; j++){
            if(i%j ==0){
                cnt++;
            }
        }
        if(cnt == 3){
            total_cnt++;
        }
    }
    printf("%d ", total_cnt);
    // Please write your code here.
    return 0;
}