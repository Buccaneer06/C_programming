/* 복권 당첨 프로그램 */
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, win_number, digit1_1, digit1_2, digit2_1, digit2_2;

    printf("복권 번호 입력: ");
    scanf("%d", &number);

    srand(time(NULL));

    win_number = (rand()%99);

    printf("당첨번호는 %d 입니다.\n", win_number);

    digit1_1 = number / 10;
    digit1_2 = number % 10;

    digit2_1 = win_number / 10;
    digit2_2 = win_number % 10;

    if(digit1_1 != digit2_1 || digit1_1 != digit2_2)
    {
        if(digit1_1 == digit2_1 || digit1_1 == digit2_2)
            printf("상금 50만원\n");
    
        else if(digit1_2 == digit2_1 || digit1_2 == digit2_2)
            printf("상금 50만원\n");
    }
    else if(digit1_1 == digit2_1 && digit1_2 == digit2_2)
        printf("상금 100만\n");
    
    else
        printf("꽝\n");

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, win_number, digit1_1, digit1_2, digit2_1, digit2_2;

    printf("복권 번호 입력 (두 자리 숫자): ");
    scanf("%d", &number);

    // 입력된 복권 번호가 두 자리 숫자인지 확인
    if (number < 0 || number > 99) {
        printf("올바른 두 자리 숫자를 입력하세요.\n");
        return 1;
    }

    srand(time(NULL));
    win_number = rand() % 100;  // 0에서 99 사이의 무작위 숫자 생성

    printf("당첨번호는 %02d 입니다.\n", win_number);

    digit1_1 = number / 10;
    digit1_2 = number % 10;

    digit2_1 = win_number / 10;
    digit2_2 = win_number % 10;

    if (number == win_number) 
    {
        printf("상금 100만원\n");
    } 
    else if ((digit1_1 == digit2_1 && digit1_2 == digit2_2) || 
               (digit1_1 == digit2_2 && digit1_2 == digit2_1)) 
               {
        printf("상금 100만원\n");
    } 
    else if (digit1_1 == digit2_1 || digit1_1 == digit2_2 ||
               digit1_2 == digit2_1 || digit1_2 == digit2_2) 
               {
        printf("상금 50만원\n");
    } 
    else 
    {
        printf("꽝\n");
    }

    return 0;
}