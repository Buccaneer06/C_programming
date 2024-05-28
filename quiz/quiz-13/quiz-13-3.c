#include <stdio.h>
#include <string.h>

void main() 
{
    char* id = "hansung"; // 수정하지 말 것
    char* pass = "computer"; // 수정하지 말 것
    char id_input[80]; // 아이디 입력용
    char pass_input[80]; // 비번 입력용

    while (1) { // 아이디와 비번이 맞을 때까지 반복한다.
        // 아이디 입력
        printf("아이디를 입력하세요: ");
        scanf("%s", id_input);

        // 아이디와 비교
        if (strcmp(id_input, id) != 0) {
            printf("아이디 오류\n");
            continue; // 아이디가 다르면 루프의 처음으로 돌아간다
        }

        // 비번 입력
        printf("비밀번호를 입력하세요: ");
        scanf("%s", pass_input);

        // 비번과 비교
        if (strcmp(pass_input, pass) != 0) {
            printf("비밀번호 오류\n");
            continue; // 비번이 다르면 루프의 처음으로 돌아간다
        }

        // 아이디와 비번이 모두 맞으면 환영 메시지 출력하고 종료
        printf("%s님 환영합니다\n", id_input);
        break; // 루프를 빠져나가고 프로그램 종료
    }
}