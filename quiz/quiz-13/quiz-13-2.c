#include <stdio.h>
#include <string.h>
void reverse(char to[], char from[])
{
  int i, len;
  len = strlen(from);
  for (i = 0; i < len; i++) {
    to[i] = from[len - 1 - i];
  }
  to[i] = '\0';
}

void main() {
  char str1[100];
  char str2[100];
  char str3[200];
  char str4[100];
  char temp[100];
  int len1, len2, len3, len4;
  
  printf("(1) 입력:");
  scanf("%s", str1);
  printf("    입력:");
  scanf("%s", str2);
 
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
  printf("(2) 교환 결과: str1=%s str2=%s\n", str1, str2);

  strcpy(str3, str2);
  printf("(3) 복사 결과: str3=%s\n", str3);
  
  strcat(str3, " ");
  strcat(str3, str1);
  strcat(str3, " Computer Engineering");
  printf("(4) 이어 붙이기 결과: str3=%s\n", str3);
  
  reverse(str4, str3);
  printf("(5) 뒤집기 결과: str4=%s\n", str4);
}