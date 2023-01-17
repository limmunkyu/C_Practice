//54. 둘 다 참일 경우만 참 출력하기

#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    if ((a!=0)&&(b!=0)){  //둘다 참(1)일 경우에만 1출력, 그 외에는 0출력
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}
