//72. 정수 입력받아 계속 출력하기

#include<stdio.h>
int main(void){
    int a;
    int i;
    scanf("%d", &a);
    for (i = 1; i <= a; i++){
        int j;
        scanf("%d", &j);
        printf("%d\n", j);
    }
    return 0;
}
