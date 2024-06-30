/* x, y 좌표에 맞는 사분면 출력 */
#include <stdio.h>

int main()
{
    int x, y;

    printf("x, y 값을 입력: ");
    scanf("%d %d", &x, &y);

    if(x > 0 && y > 0)
        printf("1사분면 입니다.\n");

    else if(x < 0 && y > 0)
        printf("2사분면 입니다.\n");
    
    else if(x < 0 && y < 0)
        printf("3사분면 입니다.\n");
    
    else if(x > 0 && y < 0)
        printf("4사분면 입니다.\n");
        
    return 0;
}