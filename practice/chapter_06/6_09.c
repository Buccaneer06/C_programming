/* x값에 따른 함수 계산 */
#include <stdio.h>

int main()
{
    double x, result;

    printf("x의 값을 입력: ");
    scanf("%lf", &x);

    if(x <= 0)
        result = (x * x) - (9 * x) + 2;
    
    else
        result = (7 * x) + 2;

    printf("f(x)의 값은 %.2lf 입니다.\n", result);

    return 0;
}