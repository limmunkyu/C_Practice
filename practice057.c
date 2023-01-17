//57. 참거짓이 서로 같을 때에만 참 출력하기

#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", (a&&b)||(!a&&!b));
    return 0;
}
