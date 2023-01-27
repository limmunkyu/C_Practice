//77. 정수 1개 입력받아 그 수까지 출력하기

#include <stdio.h>
int main(void){
    int a, i;
    scanf("%d", &a);
    for (i = 0; i <= a; i++)
        printf("%d\n", i);
    return 0;
}
