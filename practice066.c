//66. 정수 3개 입력받아 짝홀 출력하기

#include<stdio.h>
int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a % 2 == 0){
        printf("짝수\n");
    }
    else{
        printf("홀수\n");
    }
    if (b % 2 == 0){
        printf("짝수\n");
    }
    else{
        printf("홀수\n");
    }
    if (c % 2 == 0){
        printf("짝수\n");
    }
    else{
        printf("홀수\n");
    }
    return 0;
}
