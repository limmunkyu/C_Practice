//93. 교수님의 무작위 n번 호출에 불린 횟수 출력

#include <stdio.h>
int main(){
	int i, n, num;
	int arr[23] = {};
	scanf("%d", &n);  //몇 번 입력할지
    for (i=0; i<n; i++){  //n번까지 입력
	    scanf("%d", &num);
	    arr[num-1] = arr[num-1] + 1;
    }
    for (i=0; i<23; i++)
	    printf("%d", arr[i]);
	return 0;
}
