//27. 년월일 입력받아 형식 바꿔 출력하기

#include<stdio.h>
int main(void){
    int year, month, day;
    scanf("%d.%d.%d", &year, &month, &day);
    printf("%d-%d-%d", day, month, year);
    return 0;
}
