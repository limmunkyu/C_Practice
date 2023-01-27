//79. 원하는 문자가 입력될 때까지 출력하기

#include<stdio.h>
int main(void){
    char a = ' ';           //처음에 a를 ' '으로 초기화해서 겹치치 않게
    while (a != 'q'){
        scanf("%c", &a);
        if (a != ' '){      //if (a != ' ')부분을 넣지 않으면 공백 또한 문자로 인식해 같이 출력
            printf("%c\n", a);
        }
    }
    return 0;
}
