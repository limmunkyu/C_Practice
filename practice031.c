//31. 10진 정수 1개 입력받아 8진수로 출력하기

#include<stdio.h>
int main(void){
    int a;
    scanf("%d", &a);
    printf("%o", a);  //%o : 부호 없는 정수를 8진수(octal)로 출력
    return 0;
}
