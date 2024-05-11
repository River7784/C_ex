//
//  main.c
//  c_52
//
//  Created by 유가람 on 5/11/24.
//

#include <stdio.h>
#pragma warning(disable:4996)
int max(int x, int y);
int min(int x, int y);
void main(){
    int i, j;
    printf("정수 2개를 입력해주세요 : ");
    scanf("%d %d", &i, &j);
    printf("max(%d, %d) = %d \n", i, j, max(i, j));
    printf("min(%d, %d) = %d \n", i, j, min(i, j));
}

int max(int x, int y){      //max()함수 정의
    return (x > y ? x: y);  //최댓값 반환
}

int min(int x, int y){
    if(x > y)
        return y;
    else
        return x;
}
