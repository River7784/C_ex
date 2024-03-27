//
//  main.c
//  c_04
//
//  Created by 유가람 on 3/27/24.
//

#include <stdio.h>
#include <limits.h>
void main(){
    char ch1 = CHAR_MIN;
    char ch2 = CHAR_MAX;
    short sh1 = SHRT_MIN;
    short sh2 = SHRT_MAX;
    int in1 = INT_MIN;
    int in2 = INT_MAX;
    long lo1 = LONG_MIN;
    long lo2 = LONG_MAX;
    long long ll1 = LLONG_MIN;
    long long ll2 = LLONG_MAX;
    
    printf("char 자료형 범위 : %d ~ %d \n", ch1, ch2);
    printf("short 자료형 범위 : %d ~ %d \n", sh1, sh2);
    printf("int 자료형 범위 : %d ~ %d \n", in1, in2);
    printf("long 자료형 범위 : %ld ~ %ld \n", lo1, lo2);
    printf("long long 자료형 범위 : %lld ~ %lld \n", ll1, ll2);
}
