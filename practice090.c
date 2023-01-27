//90. 수 나열하기2 (등비수열)

#include<stdio.h>
int main(void){
    int a, r, n, i;
    scanf("%d %d %d", &a, &r, &n);
    for (i = 1; i < n; i++){
        a = a * r;
    }
    printf("%d", a);
}
