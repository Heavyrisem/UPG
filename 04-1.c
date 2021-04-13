#include <stdio.h>
int sum(int val1, int val2);

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", sum(a,b));
}

int sum(int val1, int val2) {
    return val1 + val2;
}