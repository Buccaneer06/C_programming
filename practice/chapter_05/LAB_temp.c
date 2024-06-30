/* 화씨 온도를 섭씨 온도로 바꾸기 */
#include <stdio.h>

int main()
{
    double f_temp, c_temp;

    printf("화씨 온도를 입력하시오: ");
    scanf("%lf", &f_temp);

    /* c_temp = 5 / 9 * (f_temp - 32);
    (5/9)는 모두 정수이므로 연산 결과가 0이다. 
    따라서 실수로 계산을 해줘야 올바른 결과가 도출된다. */

    c_temp = ((double)5/9) * (f_temp - 32);
    // 형변환 또는 5.0 / 9.0 으로 계산

    printf("섭씨 온도는 %lf입니다.\n", c_temp);

    return 0;
}