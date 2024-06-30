/* 가위바위보 프로그램 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user_choice, computer_choice;

    // 난수 생성을 위한 시드 설정
    srand(time(NULL));

    // 컴퓨터의 선택: 0 (가위), 1 (바위), 2 (보)
    computer_choice = rand() % 3;

    // 사용자 입력
    printf("가위(0), 바위(1), 보(2) 중 하나를 선택하세요: ");
    scanf("%d", &user_choice);

    // 선택 출력
    const char *choices[] = {"가위", "바위", "보"};
    printf("사용자 선택: %s\n", choices[user_choice]);
    printf("컴퓨터 선택: %s\n", choices[computer_choice]);

    // 승패 결정
    if (user_choice == computer_choice) {
        printf("비겼습니다!\n");
    } else if ((user_choice == 0 && computer_choice == 2) || // 가위가 보를 이김
               (user_choice == 1 && computer_choice == 0) || // 바위가 가위를 이김
               (user_choice == 2 && computer_choice == 1)) { // 보가 바위를 이김
        printf("사용자가 이겼습니다!\n");
    } else {
        printf("컴퓨터가 이겼습니다!\n");
    }

    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main (void)
{
   int player, computer;
 
   printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오: ");
   scanf("%d", &player);
 
   srand(time(NULL));
   computer = (rand()%3+1);
 
   if (computer == 1)
       printf("컴퓨터는 가위를 선택하였습니다.\n");
   else if (computer == 2)
       printf("컴퓨터는 바위를 선택했습니다.\n");
   else if (computer ==3)
       printf("컴퓨터는 보를 선택했습니다.\n");
 
   if (player == 1)
       if (computer == 1)
           printf ("비겼습니다.") ;
       else if (computer == 2)
           printf ("사용자가 졌습니다.") ;
       else if （computer ==3）
           printf ("사용자가 이겼습니다.") ;

   if (player == 2)
       if (computer == 1)
           printf ("사용자가 이겼습니다.") ;
       else if (computer == 2)
           printf ("비겼습니다.") ;
       else if (computer == 3)
           printf ("사용자가 졌습니다.");
           
   if (player == 3)
       if (computer == 1)
           printf ("사용자가 졌습니다.") ;
       else if (computer == 2)
           printf ("사용자가 이겼습니다.") ;
       else if (computer == 3)
           printf ("비겼습니다.");

return 0;
*/