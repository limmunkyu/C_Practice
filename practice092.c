//92. 3명 방문 주기 겹치는 날 (최소공배수)

#include<stdio.h>
int main(void){
    int a, b, c;
    int i = 1;
    scanf("%d %d %d", &a, &b, &c);
    while (i % a != 0 || i % b != 0 || i % c != 0)
        i++;
    printf("%d", i);
    return 0;
}
