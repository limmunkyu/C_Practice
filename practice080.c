//80. 언제까지 더해야 할까

#include<stdio.h>
int main(void){
    int a, i;
    int sum = 0;
    scanf("%d", &a);
    for (i = 1; ; i++){
        sum += i;
        if (sum >= a){
            break;      //sum값을 순서대로 더하다가 a보다 크거나 같아지면 break로 for문을 빠져나옴
        }
    }
    printf("%d", i);
    return 0;
}
