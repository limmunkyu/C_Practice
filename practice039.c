//39. 정수 2개 입력받아 합 출력하기

#include<stdio.h>
int main(void){
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld+%lld=%lld", a, b, a+b);
    return 0;
}
