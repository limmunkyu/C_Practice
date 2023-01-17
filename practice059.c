//59. 비트단위로 NOT 하여 출력하기

#include <stdio.h>
int main(void){
    int a;
    scanf("%d", &a);
    printf("%d", ~a);  //비트단위 논리연산 ~(bitwise not) / &(bitwise and) / |(bitwise or) / ^(bitwise xor) / <<(bitwise left shift) / >>(bitwise right shift)
    return 0;
}
