//76. 문자 1개 입력받아 알파벳 출력하기

#include<stdio.h>
int main(void){
    int i;
    char a;
    scanf("%c", &a);
    for(i='a'; i<=a; i++)
        printf("%c\n", i);
    return 0;
}
