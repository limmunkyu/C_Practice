//20. 주민번호 입력받아 형태바꿔 출력하기

#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d-%d", &a, &b);
    printf("%06d%07d", a, b);
    return 0;
}
