//82. 16진수 구구단

#include<stdio.h>
int main(void){
    int a, i;
    scanf("%X", &a);
    for (i = 1; i < 16; i++)
        printf("%X * %X = %X\n", a, i, a * i);
    return 0;
}
