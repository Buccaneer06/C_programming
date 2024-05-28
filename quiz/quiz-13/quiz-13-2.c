#include <stdio.h>
#include <string.h>

void reverse(char reversed[], char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';
}

void main() {
    char str1[100];
    char str2[100];
    char str3[200];
    char str4[100];
    char temp[100];
    int len1, len2, len3, len4;

    printf("문자열 1을 입력하세요: ");
    scanf("%s", str1);
    printf("문자열 2를 입력하세요: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("교환 후 문자열 1: %s\n", str1);
    printf("교환 후 문자열 2: %s\n", str2);

    strcpy(str3, str2);
    printf("str3에 복사된 문자열: %s\n", str3);

    strcat(str3, " ");
    strcat(str3, str1);
    strcat(str3, " Computer Engineering");
    printf("str1과 \" Computer Engineering\" 이어 붙인 결과: %s\n", str3);

    len3 = strlen(str3);

    reverse(str4, str3);
    printf("str3를 뒤집어서 얻은 str4: %s\n", str4);

    len4 = strlen(str4);

    printf("str1 길이: %d\n", len1);
    printf("str2 길이: %d\n", len2);
    printf("str3 길이: %d\n", len3);
    printf("str4 길이: %d\n", len4);
}
