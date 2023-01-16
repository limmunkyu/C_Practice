//30. 정수 1개를 입력받아 그대로 출력하기

#include<stdio.h>
int main(void){
    long long int a;  //long long int 형은 64bit를 사용하는 정수형
    scanf("%lld", &a);
    printf("%lld", a);
    return 0;
}
