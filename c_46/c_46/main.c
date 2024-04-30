//
//  main.c
//  c_46
//
//  Created by 유가람 on 4/30/24.
//

#include <stdio.h>
void main(){
    int i, j;
    i = 2;                          //while문 초기화
    while(i <= 9){                  //while문 조건
        printf(" - %d단- ", i);
        i++;                        //증감식
    }
    printf("\n");
    i = 1;
    while(i <= 9){
        j = 2;
        while (j <= 9) {
            printf(" %dx%d=%2d ", j, i, j * i);
            j++;
        }
        printf("\n");
        i++;
    }
}
