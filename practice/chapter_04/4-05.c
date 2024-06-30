/* 단위면적인 평을 제곱미터로 환산하는 프로그램. 기호상수를 이용하기.*/

#include<stdio.h>
#define SQMETER_PER_PYEONG 3.3058
/* const double SQMETER_PER_PYEONG = 3.3058; 을 사용해도 좋음*/

int main()
{
    int 평;
    double meter = 0;

    printf("평을 입력하세요: ");
    scanf("%d", &평);

    meter = 평 * SQMETER_PER_PYEONG;

    printf("%lf 평방미터입니다.\n", meter);

    return 0;
}