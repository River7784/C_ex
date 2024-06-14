//
//  main.c
//  c_69
//
//  Created by 유가람 on 6/14/24.
//

#include <stdio.h>
void main(){
    char arr[]="programming";
    char *ptr;
    int bigchar;
    ptr=arr;
    printf("before : %s \n\n", arr);
    printf("after : ");
    
    while(*ptr){
        bigchar= *ptr-32;
        printf("%c",bigchar);
        ptr++;
    }
    printf("\n");
}
