//89. 수 나열하기1 (등차수열)

#include<stdio.h>
int main(void){
    int a, d, n, sum;
    scanf("%d %d %d", &a, &d, &n);
    sum = a+((d*(n-1)));
    printf("%d",sum);
    return 0;
}
