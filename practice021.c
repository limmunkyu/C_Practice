//21. 단어 1개 입력받아 그대로 출력하기

#include<stdio.h>
int main(void){
    char a[51];  //50개의 문자를 저장하기 위해서는 char[51]로 선언
    scanf("%s", &a);  //문자열 출력을 위해 %s
    printf("%s", a);
    return 0;
}
