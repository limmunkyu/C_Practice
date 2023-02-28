//96. 19X19 바둑판 흰돌 위치 출력

#include <stdio.h>
int main(){
    int n, i, j, x, y;
    int a[20][20]={};  //바둑판 19X19
    scanf("%d", &n);
    for(i=1; i<=n; i++){
      scanf("%d %d", &x, &y);
      a[x][y]=1;
    }
    for(i=1; i<=19; i++){
      for(j=1; j<=19; j++){
        printf("%d ", a[i][j]); 
      }
      printf("\n"); 
    }
    return 1;
}
