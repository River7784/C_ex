//<과제 2> [예제 1-2]

#include <stdio.h>
#pragma warning(disable:4996)

void main(){
    int x, y, multply;  //변수 선언
    printf("첫 번째 숫자 입력 : ");
    scanf("%d", &x);    //변수 x에 입력받은 값을 넣음
    printf("두 번째 숫자 입력 : ");
    scanf("%d", &y);    //변수 y에 입력받은 값을 넣음
    multply = x * y;    //입력받은 값을 받아 계산 진행 후 변수에 값 저장
    
    printf("두 숫자의 곱 : %d \n", multply);
}
