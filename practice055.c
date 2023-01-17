//55. 하나라도 참이라면 참 출력하기

#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    if ((a!=0)||(b!=0)){   //||(or)연산자 : 조건중 하나라도 참 이면 true
        printf("1");
    }
    else {
        printf("0")   ;    //둘다 참(1)일 경우에만 1출력, 그 외에는 0출력
    }
    return 0;
}
