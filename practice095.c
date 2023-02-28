//95. 불린 번호 중 최소값 찾기

#include <stdio.h>
int main(){
	int n, k, i, arr[10000], min=24;
	scanf("%d", &n);    //n번까지 입력
	for (i=0; i<n; i++){
	    scanf("%d", &k);
	    arr[i] = k;
	}
	for (i=0; i<n; i++){
	    if (arr[i] < min)
	        min = arr[i];
	}
	printf("%d", min);
	return 0;
}
