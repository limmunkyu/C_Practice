//29. 실수 1개 입렫받아 그대로 출력하기

#include<stdio.h>
int main(void){
    double a;
    scanf("%lf", &a);  //float 형은 주로 4bit의 단정밀도로 실수를 표현, double형은 주로 8bit의 배정밀도로 실수를 표현
    printf("%.11lf", a); //각각 %f, %lf을 사용
    return 0;
}
