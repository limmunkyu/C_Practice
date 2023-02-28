//97. 바둑판 십자 뒤집기

#include <stdio.h>
int main(){
	int i,j, a[4][4], n, x, y; 
	for (i=1; i<=3; i++){	
	    for (j=1; j<=3; j++)   //바둑판 3X3
	        scanf("%d", &a[i][j]);
	}
	scanf("%d", &n);
	for (i=0; i<n; i++){	
	    scanf("%d %d", &x, &y);
	    for (j=1; j<=3; j++){
	        if (a[x][j] == 1){
	            a[x][j] = 0;
	        } else {
	            a[x][j] = 1;
	        }
	    }
	    for (j=1; j<=3; j++){
	        if (a[j][y] == 1){
	            a[j][y] = 0;
	        } else {
	            a[j][y] = 1;
	        }
	    }
	}
	for (i=1; i<=3; i++){
	    for (j=1; j<=3; j++){
	        printf("%d ", a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
