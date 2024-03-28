//
//  main.c
//  c_09
//
//  Created by 유가람 on 3/28/24.
//

#include <stdio.h>
void main(){
    short int num1, num2;
    num1 = 32767 + 1;   //short int형 범위를 벗어남(short int형의 범위 : -32768~32767)
    num2 = -32768 - 1;
    printf("num1 = %d \n", num1);   //overflow
    printf("num2 = %d \n", num2);   //underflow
    
    //형의 크기에 맞게 작성
    int inum1, inum2;
    inum1 = 32767 + 1;   //short int형 범위를 벗어남(short int형의 범위 : -32768~32767)
    inum2 = -32768 - 1;
    printf("num1 = %d \n", inum1);   //overflow
    printf("num2 = %d \n", inum2);   //underflow
}
