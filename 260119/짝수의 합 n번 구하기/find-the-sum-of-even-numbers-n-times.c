#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int a, b;
        int sum = 0; 
        scanf("%d %d", &a, &b);

        for (int j = a; j <= b; j++) {
            if(j%2==0){
                sum+=j;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}