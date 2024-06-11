//
//  main.c
//  c_67
//
//  Created by 유가람 on 6/11/24.
//

#include <stdio.h>

void main(){
    unsigned char *p = "Computer scientce 컴퓨터과학";
    unsigned char buff[20] = {0, };
    int i = 0;
    while(*p){
        if(*p>127){
            buff[i++] = *p;
        }
        p++;
    }
    puts(buff);
}
