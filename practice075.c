//75. 정수 1개 입력받아 카운트다운 출력하기2

#include<stdio.h>
int main(void){
    int a;
    scanf("%d", &a);
    a--;
    while(a != -1){
        printf("%d\n", a);
        a--;
    }
    return 0;
}
