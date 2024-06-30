/* 윤년 판단 프로그램 */
#include <stdio.h>

int main()
{
    int year, result;

    printf("연도를 입력하시오: ");
    scanf("%d", &year);

    result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    // 4로 나누어 떨어지는 연도 중 100으로 나누어떨어지지 않는 연도
    // 400으로 나누어떨어지는 연도는 무조건 윤년
    
    (result >= 1) ? printf("윤년입니다\n") : printf("윤년이 아닙니다\n");

    return 0;
}

/* if문을 활용한 윤년 계산도 가능!!

#include <stdio.h>

int main()
{
    int year;

    printf("연도를 입력: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d년은 윤년입니다.\n", year);

    else
        printf("%d년은 윤년이 아닙니다.\n", year);
        
}
*/