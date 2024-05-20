#include <stdio.h>

void get_int(int *px, int *py) {
    int a = *px;
    int b = *py;
    printf("정수의 합은 %d\n", a + b);
}

int main() {
    printf("12번 2211242 연성모\n");

    int n1, n2;
    printf("2개의 정수를 입력하시오(예: 10 20) : ");
    scanf("%d %d", &n1, &n2);
    get_int(&n1, &n2);

    return 0;
}