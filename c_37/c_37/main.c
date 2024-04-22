//
//  main.c
//  c_37
//
//  Created by 유가람 on 4/22/24.
//

#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int score = 0;
    printf("성적을 입력하세요 : ");
    scanf("%d", &score);
    if(score >= 90)
        printf("A학점 \n");
    else if (score >= 80)
        printf("B학점 \n");
    else if (score >= 70)
        printf("C학점 \n");
    else if (score >= 60)
        printf("D학점 \n");
    else
        printf("F학점 \n");
}
