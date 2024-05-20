//
//  main.c
//  c_56
//
//  Created by 유가람 on 5/20/24.
//

#include <stdio.h>
void main(){
    register int num1 = 10;     //변수 num1은 CPU의 레지스터 사용
    register long long num2 = 20;   //변수 num2sms CPU의 레지스터 사용(32bit의 경우 컴파일 오류 발생)
    printf("num1 size = %d, num2 size = %d \n", sizeof(num1), sizeof(num2));
    //printf("%p, %p \n", &num1, &num2);      //컴파일 에러 num1과 num2는 메모리에 없으므로 메모리 주소를 구할 수 없다.
    
    num2 = 0;
    for(num1 = 0; num1 <= 10; ++ num1)
        num2 += num1;
    num1--;
    printf("num1 = %d, num2 = %lld \n", num1, num2);
}
