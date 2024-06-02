//
//  main.c
//  c_58
//
//  Created by 유가람 on 6/2/24.
//

#include <stdio.h>
#include <string.h>
void main(){
    char string[]="abcdefghijklmnopqrstuvwxyz";
    unsigned i, len;
    puts(string);
    len=strlen(string);
    for(i=0; i<len; i++){
        string[i] = string[i] & 0xDf;       //OxDf는 2진수 1101 1111
    }
    puts(string);
}
