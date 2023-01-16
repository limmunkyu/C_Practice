//19. 연월일 입력받아 그대로 출력

#include<stdio.h>
int main(void){
    int year, month, day;
    scanf("%d.%d.%d", &year, &month, &day);
    printf("%04d년 %02d월 %02d일", year, month, day);  // 원하는 사이즈에 맞춰 출력하고 싶을 때 d앞에 출력될 숫자 개수를 입력
    return 0;
}
