//
//  main.c
//  c_34
//
//  Created by 유가람 on 4/18/24.
//

#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int a;
    printf("정수를 입력하세요 : ");
    scanf("%d", &a);    //정수를 입력받아 a에 저장
    if(a % 2 == 0){
        printf("입력한 정수는 %d입니다. \n", a);
        printf("%d는(은) 짝수입니다. \n", a);
    }else{
        printf("입력한 정수는 %d입니다. \n", a);
        printf("%d는(은) 홀수입니다. \n", a);
    }
}
