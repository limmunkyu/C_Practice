//71. 0 입력될 때까지 무한 출력하기1

#include<stdio.h>
int main(){
    int a;
    checkpoint:
        scanf("%d", &a);
        if(a!=0) {
            printf("%d\n", a);
            goto checkpoint;
        }
    return 0;
}
