#include <stdio.h>

int main() {
    int num[5];

    for (int i = 0; i < 5; i++)
        scanf("%d", &num[i]);

    for (int i = 0; i < 5; i++)
        printf("%d ", num[i]);

    printf("size : %d", sizeof(num));
}