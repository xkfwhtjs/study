#include <stdio.h>

int main() {
    int a;
    if (scanf("%d", &a) == 1) {
        if (a % 3 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

        if (a % 5 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}