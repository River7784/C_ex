//
//  main.c
//  c_47
//
//  Created by 유가람 on 5/1/24.
//

#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int i = 0, n;
    int sum = 0;
    printf("n=? ");
    scanf("%d", &n);
    do{
        sum = sum + i;
        i++;
    }while(i <= n);
    printf("i = %d \n", i);
    printf("i ~ %d까지의 합 = %d \n", n, sum);
}
