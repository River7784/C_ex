//<과제 2> [예제 2-2]

#include <stdio.h>
#pragma warning(disable:4996)
#define pi 3.1415926535
#define area(x) (pi*(x)*(x))

void main(){
    int a; //반지름 값을 저장하기 위한 변수 a
    printf("반지름을 입력하세요 : ");
    scanf("%d", &a);
    printf("입력받은 원의 반지름은 %d입니다. \n", a);
    printf("원의 면적은 %10.5f입니다. \n\n", area(a));
    printf("프로그램을 종료합니다. \n");
}
