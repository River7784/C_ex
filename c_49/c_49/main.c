//
//  main.c
//  c_49
//
//  Created by 유가람 on 5/3/24.
//

#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
void main(){
    int num =1;
    while(num != 0){        //num이 0이 아닌 한 계속 반복
        printf("num = ?(0 : 종료) : \n");
        scanf("%d", &num);
        if(num < 0){
            printf("num : Negative number ! \n\n");
            continue;
        }
        printf("Squareroot of %d = %f", num, sqrt(num));
    }
    printf("The end \n");
}
