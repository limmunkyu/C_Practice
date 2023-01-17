//52. 두 정수 입력받아 비교하기

#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a!=b){        //a와 b가 같지 않으면 1출력, 같으면 0출력
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}
