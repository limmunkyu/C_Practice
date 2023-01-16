//22. 문장 1개 입력받아 그대로 출력하기

#include<stdio.h>
int main(void){
    char a[2001];  //2000자 넘지 않게
    fgets(a,2000,stdin);  //scanf는 공백을 기준으로 입력을 받기 때문에 공백 문자가 포함된 문장을 받으면 첫 번째 단어만 저장
    printf("%s", a);      //fgets()는 하나의 라인 자체를 입력 받기 때문에 사용해 공백 문자가 포함되어 있는 문장을 받을 수 있음
    return 0;
}
