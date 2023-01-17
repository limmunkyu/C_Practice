//46. 정수 3개 입력받아 합과 평균 출력하기

#include<stdio.h>
int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    float avg = (float)sum / 3;
    printf("%d, %d, %d의 합은 %d입니다.\n", a, b, c, sum);
    printf("%d, %d, %d의 평균은 %.2f입니다.", a, b, c, avg);
    return 0;
}
