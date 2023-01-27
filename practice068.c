//68. 정수 1개 입력받아 평가 출력하기

#include <stdio.h>
int main(void){
    int a;
    scanf("%d", &a);
    if (90 <= a){
        printf("A");
    }
    else if (70 <= a){
        printf("B");
    }
    else if (40 <= a){
        printf("C");
    }
    else{
        printf("D");
    }
    return 0;
}
