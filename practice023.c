//23. 실수 1개 입력받아 부분별로 출력하기

#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d.%d", &a, &b);
    printf("%d\n%d", a, b);
    return 0;
}
