/* 문자에 따른 도형 이름 출력 */
#include <stdio.h>

int main()
{
    char ch;
    printf("문자를 입력: ");
    ch = getchar();

    if(ch == 'C' || ch == 'c')
        printf("Circle\n");
    
    else if(ch == 'R' || ch == 'r')
        printf("Rectangle\n");
    
    else if(ch == 'T' || ch == 't')
        printf("Triangle\n");
    
    else
        printf("Unknown\n");

    return 0;
}