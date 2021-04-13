#include <stdio.h>

int main() {
    int num[4][3];
    int counter = 1;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            num[i][j] = counter++;

    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++)
            printf("%d ", num[i][j]);
        printf("\n");
    }
    printf("size : %d", sizeof(num));

}