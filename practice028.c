//28. 정수 1개 입력받아 그대로 출력하기

#include<stdio.h>
int main(void){
    unsigned int a;  //nt형은 -2147483648 ~ +2147483647 범위의 정수를 저장
    scanf("%u", &a); //nsigned는 자료형 앞에 붙여 부호를 사용하지 않고 양수의 값을 두배 더 사용할 수 있게 함
    printf("%u", a); //부호 없는(unsigned) 정수를 10진수로 출력할 때에는 %u를 사용
    return 0;
}
