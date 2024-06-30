/* cm를 피트로 변환하는 프로그램  */
#include <stdio.h>

int main()
{
    int height, feet;
    double inch;

    printf("키를 입력(cm): ");
    scanf("%d", &height);

    feet = height / (2.54 * 12);
    inch = (height/2.54) - (feet * 12);

    printf("%dcm는 %d피트 %.2lf인치 입니다. \n", height, feet, inch);



    return 0;
}