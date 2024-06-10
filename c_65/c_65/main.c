//
//  main.c
//  c_65
//
//  Created by 유가람 on 6/10/24.
//

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
    char buffer[80], *p=buffer;
    int len, i=0;
    printf("Input String : ");
    scanf("%s",p);
    len=strlen(p);
    while(*p)
        p++;
    
    printf("Inverse Sting : ");
    while(i<len){
        p--;
        putchar(*p);
        i++;
    }
    
    putchar('\n');
    getch();
}
