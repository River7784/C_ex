//
//  main.c
//  c_33
//
//  Created by 유가람 on 4/17/24.
//

#include <stdio.h>
void main(){
    int a = 10, b = 10;
    printf("if문 실행 전 : a = %d, b = %d \n", a, b);
    if(a > b){
        a = a + 20;
        printf("a = %d \n", a);
    }
    b = b + 20;
    printf("if문 실행 후 : a = %d, b = %d \n", a, b);
}
