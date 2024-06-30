#include<stdio.h>

/* int형의 변수 x와 y의 값을 서로 교환하는 프로그램.*/

int main()
{
    int x = 10;
    int y = 20;
    int tmp = 0;

    printf("x = %d, y = %d\n", x, y);

    tmp = x; /*또 하나의 변수가 필요하다. 빈 컵 역할!*/
    x = y;
    y = tmp;

    printf("x = %d, y = %d\n", x, y);


    return 0;
}