//58. 둘 다 거짓일 경우만 참 출력하기

#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", (!a&&!b));
    return 0;
}
