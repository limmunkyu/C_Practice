//69. 평가 입력받아 다르게 출력하기

#include <stdio.h>
int main(void){
    char a;
    scanf("%c", &a);
    switch (a){
    case 'A':
        printf("best!!!");
        break;
    case 'B':
        printf("good!!");
        break;
    case 'C':
        printf("run!");
        break;
    case 'D':
        printf("slowly~");
        break;
    default:
    printf("what?");
        break;
    }
    return 0;
}
