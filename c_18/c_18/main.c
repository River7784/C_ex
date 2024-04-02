//
//  main.c
//  c_18
//
//  Created by 유가람 on 4/2/24.
//

#include <stdio.h>
void main(){
    printf("|%d| \n", 123);     //숫자 길이만큼 출력 폭이 자동 저장됨
    printf("|%5d| \n", 123);    //총 5자리로 오른쪽부터 채워짐
    printf("|%-5d| \n", 123);   //총 5자리로 왼쪽부터 채워짐
    printf("|%05d| \n", 123);    //총 5자리로 오른쪽부터 채워지고, 공백은 0으로 채워짐
    printf("|%6.1f| \n", 123.45);   //총 6자리(소수점 포함)로 소수점 이하 1자리 출력
    printf("|%07.2f| \n", 123.45);  //총 7자리(소수점 포함)로 소수점 이하 2자리 출력
}
