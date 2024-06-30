/* 놀이공원 이용 가능 프로그램 */
#include <stdio.h>

int main()
{
    int height, age;

    printf("키를 입력: ");
    scanf("%d", &height);

    printf("나이 입력: ");
    scanf("%d", &age);

    if(height >= 140 && age >= 10) 
    //논리연산자 &&로 조건 2가지를 연결한다.
        printf("타도 좋습니다.\n");
    
    else
        printf("죄송합니다.\n");

    return 0;
}