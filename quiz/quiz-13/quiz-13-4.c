#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main()
{
	char* id[4] = { "hansung1", "hansung2", "hansung3", "hansung4" }; // � � �
	char* pass[4] = { "computer1", "computer2","computer3", "computer4" }; // � � �
	char id_input[80];
	char pass_input[80];
	int i;
	while (1) {
		printf("아이디 입력: ");
		scanf("%s", id_input);
		for (i = 0; i < 4; i++) {
			if (strcmp(id_input, id[i]) == 0)
				break;
		}
		if (i==4) {
			printf("아이디 오류\n");
		}
		else {
			printf("비밀번호 입력: ");
			scanf("%s", pass_input);
			
			if (strcmp(pass_input, pass[i]) != 0) {
				printf("비밀번호 오류\n");
			}
			else {
				printf("%s님 환영합니다.\n", id_input);
				break;
			}
		}
	}
}