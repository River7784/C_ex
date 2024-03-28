//
//  main.c
//  c_08
//
//  Created by 유가람 on 3/28/24.
//

#include <stdio.h>
void main(){
    enum day1 {SUN, MON, TUE, WED, THU, FRI, SAT} d1;
    enum day2 { sun = 2, mon, tue, wed, thu, fri, sat} d2;
    d1 = WED;
    d2 = wed;
    printf("열거형 d1에 저장된 값 : %d \n", d1);
    printf("열거형 d2에 저장된 값 : %d \n", d2);
}
