//
//  main.c
//  c_32
//
//  Created by 유가람 on 4/16/24.
//

#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int a;
    printf("1부터 200사이 정수를 입력하세요 : ");
    scanf("%d", &a);
    if(a < 100)
        printf("입력한 정수가 100보다 작음 \n");
    printf("a = %d", a);
}
