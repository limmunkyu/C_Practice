//49. 두 정수 입력받아 비교하기

#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("%d가 %d보다 크다.\n", a, b);
    }
    else if(b>a){
        printf("%d가 %d보다 크다.\n", b, a);
    }
    else
        printf("%d와 %d는 같다.\n", a, b);
    return 0;
}
