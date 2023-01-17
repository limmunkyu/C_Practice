//48. 한 번에 2의 거듭제곱 배로 출력하기

#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a << b);  //a를 2^b배만큼 곱한 값 출력
    return 0;
}
