//
//  main.c
//  c_20
//
//  Created by 유가람 on 4/4/24.
//

#include <stdio.h>

void main(){
    char a;
    printf("문자 하나를 입력하세요 \n");
    a = getchar();  //한 문자가 입력되면 문자형 변수 a에 저장함
    printf("c =. c \n", a);
    
    char var= 'A';
    putchar(var);   //함수의 괄호 안에 문자형 변수가 사용됨
    putchar(var+1); //수식이 사용됨
    putchar('\n');  //escape문자가 사용됨
    putchar('K');   //문자형 상수가 사용됨
    putchar('K'+2); //수식이 사용됨
    putchar('\007 \n');    //escape answkrk tkdydehla(\007은 \a와 같은 의미)
}
