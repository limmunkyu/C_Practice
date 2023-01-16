//24. 단어 1개를 입력받아 나누어 출력하기

#include<stdio.h>
int main(void){
    char a[20];
    scanf("%s", &a);
    for(i =0; i<21; i++){
        if(a[i] == NULL) break;  //a배열의 문자를 하나하나 출력하고 NULL을 만나면 반복문에서 탈출
        printf("\'%c\'\n",a[i]); 
    }
    return 0;
