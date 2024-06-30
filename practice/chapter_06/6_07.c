/* 표준 체중 측정 */
#include <stdio.h>

int main()
{
   int weight, height, 표준체중;

   printf("몸무게와 키를 입력하시오: ");
   scanf("%d %d", &weight, &height);

   표준체중 = (height - 100) * 0.9;

   if(weight >= 표준체중)
    printf("과체중입니다.\n");
   
   else if(weight == 표준체중)
    printf("표준체중입니다. \n");

   else
    printf("저체중입니다.\n");

   return 0;
}