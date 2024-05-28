#include <stdio.h>
#include <string.h>

int mystrlen(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() 
{
    char str[100];
    int len;

    while (1) {
        printf("빈칸 포함 문자열 입력: ");
        
        gets(str);

        if (strcmp(str, "exit") == 0) {
            break;
        }

        len = mystrlen(str);

        printf("문자열의 길이: %d\n", len);
    }
}