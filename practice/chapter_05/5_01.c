/* 몫과 나머지 계산 */
#include<stdio.h>

int main()
{
    int x, y;
    int 몫, 나머지;

    printf("정수 2개 입력: ");
    scanf("%d %d", &x, &y);

    몫 = x / y;
    나머지 = x % y;

    printf("몫: %d\n", 몫);
    printf("나머지: %d\n", 나머지);

    return 0;
}