#include <stdio.h>

int main()
{
    int height, base;
    double area;

    printf("삼각형의 높이: ");
    scanf("%d", &height);
    printf("삼각형의 밑변: ");
    scanf("%d", &base);

    area = 0.5 * (double)height * (double)base;

    printf("삼각형의 넓이: %.2lf\n", area);

    return 0;
}