//67. 정수 1개 입력받아 분석하기

#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a > 0){
    	printf("plus\n");
    }
    else{
    	printf("minus\n");
    }
    
    if(a%2 == 0){
    	printf("짝수\n");
    }
    else{
    	printf("홀수\n");
    }
    return 0;
}
