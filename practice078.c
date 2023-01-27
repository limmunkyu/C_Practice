//78. 짝수 합 구하기

#include<stdio.h>
int main(void){
int a, i;
    int sum = 0;
    scanf("%d", &a);
    for (i = 0; i <= a; i += 2){
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
