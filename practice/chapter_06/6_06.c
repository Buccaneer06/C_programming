/* 자음 모음 구별 */
#include <stdio.h>

int main()
{
    char word;

    printf("문자를 입력하시오: ");
    word = getchar();

    if(word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u' ||
       word == 'A' || word == 'E' || word == 'I' || word == 'O' || word == 'U')
        printf("모음입니다.\n");
    else
        printf("자음입니다.\n");

    return 0;
}