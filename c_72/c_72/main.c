//
//  main.c
//  c_72
//
//  Created by 유가람 on 6/21/24.
//

#include <stdio.h>
#include <stdlib.h>

struct s_type{
    char name[40];
    char phone[14];
    int hours;
    int wage;
}emp[10];       //구조체 배열 선언

void main(){
    int i;
    char temp[80];
    
    for(i=0; i<10; i++){
        printf("Enter name: ");
        gets(emp[i].name);
        printf("Enter phone number: ");
        gets(emp[i].phone);
        printf("Enter hours worked: ");
        gets(temp);
        emp[i].hours = atoi(temp);  //문자열을 정수로 변환하는 함수
        printf("Enter hourly wage: ");
        getc(temp);
        emp[i].wage = atof(temp);   //문자열을 실수로 변환하는 함수
        printf("name=%s, phone=%s, hour=%d, wage=%d \n", emp[i].name, emp[i].phone, emp[i].hours, emp[i].wage);
    }
}
