#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void)
{
	char c1, c2;
	printf("6번 2211242 연성모\n");
	// (1)번
	for (c1 = 'A'; c1 <= 'Z'; c1++) {
		for (c2 = 'A'; c2 <= c1; c2++) {
			printf("%c", c2);
		}
		printf("\n");
	}
	printf("\n");
	// (2)번 완성
	// (3)번 완성 – 알파벳 출력 전에 빈칸을 먼저 출력해야 함
	// (4)번 완성 – 알파벳 출력 전에 빈칸을 먼저 출력해야 함
}
