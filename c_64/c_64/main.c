//
//  main.c
//  c_64
//
//  Created by 유가람 on 6/9/24.
//

#include <stdio.h>

void main(){
    int i = 127;
    int j;
    
    printf("%d, %x \n", i, i); //변수 i값을 10진수와 16진수로 출력
    printf("%x, \n", &i);
    printf("%#x \n", &i);
    printf("%x \n", &j);
    printf("%#x \n", &j);
}
