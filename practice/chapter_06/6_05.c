/* 해당 월 출력 */
#include <stdio.h>

int main()
{
    int month;

    printf("월 번호 입력: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("JAN\n");
        break;
    
    case 2:
        printf("FEB\n");
        break;
    
    case 3:
        printf("MAR\n");
        break;
    
    case 4:
        printf("APR\n");
        break;
    
    case 5:
        printf("MAY\n");
        break;
    
    case 6:
        printf("JUN\n");
        break;
    
    case 7:
        printf("JUL\n");
        break;
    
    case 8:
        printf("AUG\n");
        break;
    
    case 9:
        printf("SEP\n");
        break;
    
    case 10:
        printf("OCT\n");
        break;

    case 11:
        printf("NOV\n");
        break;

    case 12:
        printf("DEC\n");
        break;
    }
    return 0;
}