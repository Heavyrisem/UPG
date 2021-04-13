#include <stdio.h>

int main(void) {
    int i, total = 0;

    for (i = 1; i <= 100; i++) 
        if (i%2 == 0)
            total += i;
    printf("%d\n", total);

    total = 0;
    i = 1;
    while (1) {
        if (i > 100) break;
        if (i%2 == 0)
            total = total + i;
        i++;
    }
    printf("%d\n", total);


    total = 0;
    i = 1;
    do {
        if (i > 100) break;
        if (i%2 == 0)
            total = total + i;
        i++;
    } while (1);
    printf("%d\n", total);
}