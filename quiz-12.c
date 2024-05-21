#include <stdio.h>

void main()
{
	int x=1, y=2, z=3;
	// 포인터 변수 px, py, pz 선언
	// px, py, pz를 각각 x, y, z의 주소로 지정
	// 아래 5라인을 같은 결과가 나오도록 px, py, pz 로만 완성
	// x = 1000 대신 px 사용
	// x += 2 대신 px 사용
	// y = 2000 대신 py 사용
	// y -= 3 대신 py 사용
	// z = x + y 대신 px, py, pz 사용
	// 아래 부분은 수정하지 말 것
	printf("px=%X py=%X pz=%X\n", px, py, pz);
	printf("x=%d y=%d z=%d\n", x, y, z);
	printf("*px=%d *py=%d *pz=%d\n", *px, *py, *pz);
}
