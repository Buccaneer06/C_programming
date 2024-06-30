/* 약수 검사 프로그램 */
#include <stdio.h>

int main()
{
    int x, y;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);
    printf("정수를 입력하시오: ");
    scanf("%d", &y);

    if(x % y == 0) // 나머지가 0이면 약수이다.
        printf("약수입니다.\n");
    
    else
        printf("약수가 아닙니다.\n");

    return 0;
}