/* 합, 차, 곱, 몫 구하기 */
#include<stdio.h>

int main()
{
    double x, y;
    double sum, sub, multi, divd;

    printf("실수 2개 입력: ");
    scanf("%lf %lf", &x, &y);

    sum = x + y;
    sub = x - y;
    multi = x * y;
    divd = x / y;

    printf("%.2lf %.2lf %.2lf %.2lf\n", sum, sub, multi, divd);
    //소수 두번째 자리까지만 제한해서 출력할 때 ".2lf" 를 사용
    
    return 0;
}