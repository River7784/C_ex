//
//  main.c
//  c_79
//
//  Created by 유가람 on 7/4/24.
//

#include <stdio.h>

void main(){
    FILE *fp;
    char filename[20];
    puts("삭제 파일 이름 : ");
    gets(filename);
    
    if((remove(filename)==-1))
        printf("\n***삭제할 수 없습니다***\n");
    else
        printf("\n***삭제되었습니다***\n");
    
    return;
}
