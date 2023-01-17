//47. 정수 1개 입력받아 2배 곱해 출력하기

#include<stdio.h>
int main(void){
    int a;
    scanf("%d", &a);
    printf("%d", a << 1); //2진수 형태의 값을 왼쪽으로 shift(<<)하면 2배 증가, 오른쪽으로 shift(>>)하면 반으로 감소
    return 0;             //연산자 뒤에 shift 횟수를 정해준다.
}
