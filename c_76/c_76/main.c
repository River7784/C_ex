//
//  main.c
//  c_76
//
//  Created by 유가람 on 6/27/24.
//

#include <stdio.h>

void main(){
    FILE *fp;
    
    fp=fopen("sample1", "w");    //sample1 파일 쓰기 모드로 개방
    
    if(fp != NULL){ //파일 개방 에러 체크
        fputs("대한민국 \n", fp);
        fputs("서울 \n", fp);
        fputs("양천구 \n", fp);
        fputs("목동 \n", fp);
    }
    fclose(fp); //닫기
}
