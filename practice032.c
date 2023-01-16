//32. 10진 정수 1개 입력받아 16진수로 출력하기

#include<stdio.h>
int main(void){
    int a;
    scanf("%d", &a);  //%x, %X : 부호 없는 정수를 16진수(hexadecimal)로 출력
    printf("%x", a);  //x는 출력 시 알파벳 부분이 소문자로 X는 대문자로 출력
    return 0;
}
