//
//  main.c
//  c_10
//
//  Created by 유가람 on 3/28/24.
//

#include <stdio.h>

int a = 100;    //전역변수 a
void func(){
    int a = 200;    //func()의 지역변수 a
    printf("func()에서 a의 값 : %d \n", a); //func()의 지역변수 a출력
}

int main(){
    printf("main()에서 a의 값 ; %d \n", a); //전역변수 출력
    func();
}

