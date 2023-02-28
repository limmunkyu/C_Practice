//98. 격자판 막대 채우기

#include <stdio.h>
int main() {
	int arr[101][101]={0,}, h, w, n, l, d, x, y;
	scanf("%d %d", &h, &w);
	scanf("%d", &n);
	for (int i=0; i<n; i++){
	    scanf("%d %d %d %d", &l, &d, &x, &y);
	    if (d == 0){ //방향이 가로일 때
	        for (int j=y; j<y+l ;j++){
	            arr[x][j] = 1;
	        }
	    }
	    else { //방향이 세로일 때
	        for (int j=x; j<x+l ;j++){
	            arr[j][y] = 1;
	        }
	    }
	}
	for (int i=1; i<=h; i++){
	    for (int j=1; j<=w; j++)
	        printf("%d ", arr[i][j]);
	    printf("\n");
	}
	return 0;
}
