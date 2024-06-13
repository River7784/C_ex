//
//  main.c
//  c_68
//
//  Created by 유가람 on 6/13/24.
//

#include <stdio.h>
void main(){
    int str;
    char *alpb[5]={{"A"},{"B"},{"C"},{"D"},{"E"}};
    for(str=0; str<5; str++){
        printf("첫 번째 값은 %s\n", *(alpb+str));
        return;
    }
}
