//
//  main.c
//  c_55
//
//  Created by 유가람 on 5/19/24.
//

#include <stdio.h>
#pragma warning(disable:4996)
void extern_en(void);   //extern_ex() 의 원형
char s[100];
void main(){
    printf("문자열을 입력하세요 : ");
    scanf("%s", s);
    printf("입력받는 문자열 %s는 전역변수 s에 저장되었습니다. \n", s);
    extern_en();
}
