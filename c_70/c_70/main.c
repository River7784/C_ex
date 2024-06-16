//
//  main.c
//  c_70
//
//  Created by 유가람 on 6/15/24.
//

#include <stdio.h>
#include <string.h>

struct student{
    char name[30];
    char phone[20];
    char addr[100];
};

void main(){
    struct student info;
    
    strcpy(info.name, "Yu Garam");
    strcpy(info.phone, "02-1234-5678");
    strcpy(info.addr, "서울특별시 양천구");
    
    printf("이름 : %s \n", info.name);
    printf("연락처 : %s \n", info.phone);
    printf("주소 : %s \n", info.addr);
}
