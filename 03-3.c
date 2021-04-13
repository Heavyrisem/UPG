#include <stdio.h>

int main() {
    int num[5][5];

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5-i; j++)
            num[i][j] = i+1;
    

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5-i; j++)
            printf("%d", num[i][j]);
        printf("\n");
    }
}