#include<stdio.h>

/* 상자의 부피를 구하는 프로그램. 값을 double형으로 받아보기*/

int main()
{
    double length, width, height;
    double 부피;

    printf("상자의 가로 세로 높이를 한번에 입력: ");
    scanf("%lf %lf %lf", &length, &width, &height);

    부피 = height *(length * width);

    printf("상자의 부피는 %lf 입니다.\n", 부피);

    return 0;
}