//25. 정수 1개 입력받아 나누어 출력하기

#include<stdio.h>
int main(void){
    int a, b, c, d, e;
    scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);  //변수 5개를 선언하고 %1d로 각 자리의 숫자를 한 개씩 나누어 변수에 저장
    printf("[%d0000]\n[%d000]\n[%d00]\n[%d0]\n[%d]", a, b, c, d, e);
    return 0;
}
