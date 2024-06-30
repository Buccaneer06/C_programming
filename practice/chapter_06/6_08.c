/* 놀이공원 자유이용권 가격 계산 */
#include <stdio.h>

int main()
{
    int time, age;

    printf("현재 시간과 나이를 입력: ");
    scanf("%d %d", &time, &age);

    if (time < 17) 
    {
        if (age < 12 || age >= 65)
            printf("25000원 입니다.\n");
        else
            printf("34000원 입니다.\n");
    } 
    
    else 
    {
        printf("10000원 입니다.\n");
    }

    return 0;
}