#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
    char* id[4] = { "hansung1", "hansung2", "hansung3", "hansung4" }; // 수정하지 말 것
    char* pass[4] = { "computer1", "computer2", "computer3", "computer4" }; // 수정하지 말 것
    char id_input[80]; // 아이디 입력용
    char pass_input[80]; // 비번 입력용
    int i;
    int authenticated = 0;

    while (!authenticated) { // 아이디와 비번이 맞을 때까지 반복한다.
        // 아이디 입력
        printf("아이디를 입력하세요: ");
        scanf("%s", id_input);

        // 아이디가 유효한지 검사
        for (i = 0; i < 4; i++) {
            if (strcmp(id_input, id[i]) == 0) {
                // 비번 입력
                printf("비밀번호를 입력하세요: ");
                scanf("%s", pass_input);

                // 비번이 유효한지 검사
                if (strcmp(pass_input, pass[i]) == 0) {
                    authenticated = 1;
                    break;
                } else {
                    printf("비밀번호 오류\n");
                    break;
                }
            }
        }

        if (!authenticated && i == 4) {
            printf("아이디 오류\n");
        }
    }

    if (authenticated) {
        printf("%s님 환영합니다\n", id_input);
    }
}