//53. 참 거짓 바꾸기

#include<stdio.h>
int main(void){
    int a;
    scanf("%d", &a);
    printf("%d", !a);  //입력된 값이 0이면 1, 1이면 0
    return 0;          //0은 거짓(false), 1을 포함한 그 외의 숫자는 true로 인식
}
