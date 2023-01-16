//26. 시분초 입력받아 분만 출력하기

#include<stdio.h>
int main(void){
    int hour, minute, second;
    scanf("%d:%d:%d", &hour, &minute, &second);
    printf("%d", minute);
    return 0;
