#include <stdio.h>

int main() {
    int temp, a[5] = {80, 60 ,40 ,20 ,50};

    for (int i = 0; i < 4; i++) 
        for (int j = i+1; j < 5; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }


    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
}