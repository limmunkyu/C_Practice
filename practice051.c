//51. 두 정수 입력받아 비교하기

#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a<=b)  //a가 b보다 같거나 작으면 1 출력, 그렇지 않은 경우 0출력
        printf("1");
    else
        printf("0");
    return 0;
}
