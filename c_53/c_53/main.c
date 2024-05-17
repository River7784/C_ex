//
//  main.c
//  c_53
//
//  Created by 유가람 on 5/17/24.
//

#include <stdio.h>
void main(){
    int i, j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if( i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i = 0; i <= 5; i++){
        for(j = 5; j > -1; j--){
            if( i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
