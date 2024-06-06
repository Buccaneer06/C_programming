#include <stdio.h>
#include <string.h>

void main() 
{
    char* id = "hansung"; // 수정하지 말 것
    char* pass = "computer"; // 수정하지 말 것
    char id_input[80]; // 아이디 입력용
    char pass_input[80]; // 비번 입력용

    while (1) { 
        printf("아이디를 입력하세요: ");
        scanf("%s", id_input);

        if (strcmp(id_input, id) != 0) {
            printf("아이디 오류\n");
            continue;
        }

        printf("비밀번호를 입력하세요: ");
        scanf("%s", pass_input);

       
        if (strcmp(pass_input, pass) != 0) {
            printf("비밀번호 오류\n");
            continue;
        }

        printf("%s님 환영합니다\n", id_input);
        break;
    }
}