/* 아스키 코드값을 입력하면 해당 코드값에 해당하는 문자를 출력하는 프로그램 */
#include<stdio.h>

int main()
{
    int ascii;

    printf("아스키 코드값을 입력하시오: ");
    scanf("%d", &ascii);

    printf("문자: %c 입니다.\n", ascii);
    /* 문자를 출력하려면 형식 지정자 %c를 사용. 
    정수를 받아서 (char)로 형변환하여 %c로 출력*/

    return 0;
}