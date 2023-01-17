//50. 두 정수 입력받아 비교하기

#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a==b)              // ==는 같다
        printf("같다\n");
    else                  // !=는 같지 않다
        printf("다르다\n");
    return 0;
}
