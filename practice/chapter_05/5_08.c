/* 구의 표면적과 체적 구하기 */
#include <stdio.h>
#define 파이 3.1415926535 
// 기호상수 이용해서 파이 정의하기.

int main() {
    
    double 반지름, 표면적, 체적;
    printf("구의 반지름을 입력하시오: ");
    scanf("%lf", &반지름);

    표면적 = 4 * 파이 * 반지름 * 반지름;
    체적 = (4.0 / 3.0) * 파이 * 반지름 * 반지름 * 반지름;

    printf("표면적은 %.2lf 입니다.\n", 표면적);
    printf("체적은 %.2lf 입니다.\n", 체적);

    return 0;
}