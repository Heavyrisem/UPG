#include <stdio.h>

int main() {
    int temp, a[5] = {80, 60 ,40 ,20 ,50};

    for (int i = 0; i < 4; i++){
        int min = i;
        for (int j = i+1; j < 5; j++) {
            if (a[min] > a[j]) min = j;
        }
        if (i != min) {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
}