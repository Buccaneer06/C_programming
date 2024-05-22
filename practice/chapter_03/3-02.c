#include <stdio.h>

int main()
{
    double mile, meter;

    printf("마일을 입력하시오: ");
    scanf("%lf", &mile);

    meter = 1609.0 * mile;

    printf("%.1lf 마일은 %.2lf미터 입니다.\n", mile, meter);

    return 0;
}