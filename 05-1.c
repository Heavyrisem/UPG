#include <stdio.h>
int sum(int a);

int main() {
    int num;

    scanf("%d", &num);
    printf("%d", sum(num));
}

int sum(int a) {
    if (a < 1) return 0;
    return a + sum(a-1);
}