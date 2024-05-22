#include <stdio.h>

int main()
{
    int salary;
    double time;

    printf("연봉을 입력하시오(단위: 만원): ");
    scanf("%d", &salary);

    time = 100000 / (double)salary;

    printf("10억을 모으는데 걸리는 시간(단위: 년): %.2lf\n", time);

    return 0;
}