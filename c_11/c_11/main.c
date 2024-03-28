//
//  main.c
//  c_11
//
//  Created by 유가람 on 3/28/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*변수의 초기화(하지않음)*/
    int i, sum;
    for(i = 1; i <= 10; i++)
        sum = sum + i;
    printf("1부터 10까지의 합 = %d \n", sum);
}
