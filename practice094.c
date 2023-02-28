//94.출석 번호 거꾸로 출력

#include <stdio.h>
int main() {
    int i, n, k, arr[10000];
	scanf("%d", &n);    //몇 번 입력할지
	for (i=0; i<n; i++){
	    scanf("%d", &k);    //n번까지 입력
	    arr[i] = k;
	}
	for (i=n-1; i>=0; i--)
	    printf("%d ", arr[i]);
	return 0;
}
