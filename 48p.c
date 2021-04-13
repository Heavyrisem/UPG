#include <stdio.h>

int main() {
    int a;
    printf("정수를 입력하시오: ");
    scanf("%d", &a);
    if (a % 21) // if (a%3 && a%7)
        printf("3과 7의 배수");
    else
        printf("3과 7의 배수x");
}