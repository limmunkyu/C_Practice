//84. 빛 섞어 색 만들기

#include<stdio.h>
int main(void){
    int x, y, z;
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
    for (x = 0; x < r; x++)
        for (y = 0; y < g; y++)
            for (z = 0; z < b; z++){
                printf("%d %d %d\n", x, y, z);
            }
}
