//
//  main.c
//  c_77
//
//  Created by 유가람 on 6/29/24.
//

#include <stdio.h>

void main(){
    FILE *fp;
    char buff[100];
    
    fp=fopen("sample1", "r");    //sample1 파일 읽기모드로 개방
    
    if(fp != NULL){
        while(!feof(fp)){
            fgets(buff, 100, fp);
            if(feof(fp)) break;
            printf(buff);
        }
        fclose(fp);
    }
}
