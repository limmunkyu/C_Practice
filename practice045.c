//45. 정수 2개 입력받아 자동 계산하기

#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n", a, b, a+b);
    printf("%d-%d=%d\n", a, b, a-b);
    printf("%d*%d=%d\n", a, b, a*b);
    printf("%d/%d=%d\n", a, b, a/b);
    return 0;
}
