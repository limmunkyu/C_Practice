//81. 주사위 2개를 던지면

#include<stdio.h>
int main(void){
    int a, b;
    for (a = 1; a <= 6; a++)
        for (b = 1; b <= 6; b++)
            printf("%d %d\n", a, b);
    return 0;
}
