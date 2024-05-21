#include <stdio.h>
// x, y 입력
void inputxy(int* px, int* py) // () 안의 변수 선언도 완성
{
	printf("x y 입력 : ");
	scanf("%d %d", px, py);
}
// x, y를 교환
void swapxy(int* px, int* py)  // () 안의 변수 선언도 완성
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main() // main은 수정할지 말 것
{
	int x, y;
	inputxy(&x, &y);
	printf("swapxy()전 : x=%d y=%d\n", x, y);
	swapxy(&x, &y);
	printf("swapxy()후 : x=%d y=%d\n", x, y);

	return 0;
}
