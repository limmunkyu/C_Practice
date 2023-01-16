//15. 실수 입력받아 둘째 자리까지 출력하기

#include<stdio.h>
int main(void){
    float a;
    scanf("%f", &a);   // %.2f : float 형에서 소수 2번째 자리까지 표시 (3번째 자리에서 반올림)
    printf("%.2f", a); // %.3f : flat 형에서 소수 3번째 자리까지 표시 (4번째 자리에서 반올림)
    return 0;
}
