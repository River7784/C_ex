//
//  main.c
//  c_48
//
//  Created by 유가람 on 5/2/24.
//

#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int num, sum =0;
    while(1){
        printf("num(끝 : 0)...? ");
        scanf("%d", &num);
        if(num == 0)            //num 값에 0을 입력받을경우
            break;              //while문 탈출
        sum = sum + num;
    }
    printf("sum = %d", sum);
}
