/* 최소값 구하는 프로그램 */
#include <stdio.h>

int main()
{
    int x, y, z, min;

    printf("정수 3개 입력: ");
    scanf("%d %d %d", &x, &y, &z);

    // 초기 최소값을 x로 설정
    min = x;

    // y가 min보다 작으면 min을 y로 설정
    if(y < min)
        min = y;
    
    // z가 min보다 작으면 min을 z로 설정
    if(z < min)
        min = z;
    
    printf("제일 작은 정수는 %d 입니다.\n", min);
    
    return 0;
}