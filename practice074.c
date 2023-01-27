//74. 정수 1개 입력받아 카운트다운 출력하기1

#include<stdio.h>
int main(void){
    int a;
    scanf("%d", &a);
    while(a != 0){
        printf("%d\n", a);
        a--;
    }
    return 0;
}
