/* 두자리 정수 십의자리, 일의자리 분리하여 출력 */
#include <stdio.h>

int main()
{
    int x, ten, one;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);

    ten = x / 10;
    one = x % 10;
    //나머지 연산자를 활용하면 쉽게 구할 수 있음

    printf("십의 자리: %d\n", ten);
    printf("일의 자리: %d\n", one);

    return 0;
}