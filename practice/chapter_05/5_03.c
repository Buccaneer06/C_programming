/* 3개의 정수 중 최대값 구하기 */
#include<stdio.h>

int main()
{
    int x, y, z;
    int max;
    
    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &x, &y, &z);

    max = (x > y) ? x : y;
    max = (max > z) ? max : z;
    //최대값을 구할 때 조건연산자 이용하기

    printf("최대값은 %d 입니다.\n", max);

    return 0;
}