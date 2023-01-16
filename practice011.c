//11. 문자 1개 입력받아 그대로 출력하기

#include<stdio.h>
int main(void){
    char a;
    scanf("%c", &a);  //char형은 1byte의 작은 크기의 형으로 정수나 문자 넣을 수 있음
    printf("%c", a);  //154654를 입력해도 1만 출력
    return 0;
}
