//87. 입력한 수보다 작을 때까지 1부터 더하기

#include<stdio.h>
int main(void){
    int a, i;
    int sum = 0;
    scanf("%d", &a);
    for (i = 1;; i++){
        sum += i;
        if (sum >= a) break;
    }
    printf("%d", sum);
    return 0;
}
