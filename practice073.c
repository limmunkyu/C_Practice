//73. 0 입력될 때까지 무한 출력하기2

#include<stdio.h>
int main(void){
	int a;
	while(1){
	    scanf("%d", &a);
	    if (a == 0) 
	        break;
	    printf("%d\n", a);
	}
	return 0;
}
