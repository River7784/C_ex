//
//  main.c
//  c_39
//
//  Created by 유가람 on 4/23/24.
//

#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int n;
    printf("n = ? ");
    scanf("%d", &n);
    printf("n %% 5 = %d \n", n % 5);    //%%는 %문자 자체를 출력
    switch (n % 5) {        //입력된 수를 5로 나누고 그 나머지에 해당되는 경우로 분기
        case 0:
            printf("나머지는 0 \n");
            break;
        case 1:
            printf("나머지는 1 \n");
            break;
        case 2:
            printf("나머지는 0 \n");
            break;
        default:
            printf("나머지는 3이나 4 \n");
            break;
    }
}
