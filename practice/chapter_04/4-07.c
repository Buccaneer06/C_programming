/* 운동에너지 구하는 프로그램 E=mv²\2.0 */
#include<stdio.h>

int main()
{
    int m, v;
    double E;

    printf("질량(kg): ");
    scanf("%d", &m);
    printf("속도(m/s): ");
    scanf("%d", &v);

    E = (m * v * v) / 2.0;

    printf("운동에너지(J): %lf\n", E);

    return 0;
}