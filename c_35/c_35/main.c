//
//  main.c
//  c_35
//
//  Created by 유가람 on 4/20/24.
//

#include <stdio.h>
#pragma warning(disable:4996)
#include <stdio.h>
void main(){
    int a;
    printf("정수를 입력하세요 : ");
    scanf("%d",&a);
    if(a >= 0)
        if(a == 0)  //첫번째 조건과 두번쨰 조건을 모두 만족할 경우 출력
            printf("입력된 값은 0");
        else        //첫번째 조건은 만족하지만 두번째 조건은 만족하지 않을 경우 출력
            printf("입력된 값은 양수");
    else    //첫번째 조건이 만족하지 않을 경우 출력
        ("입력된 값은 음수");
}
