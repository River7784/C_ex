//
//  main.c
//  c_78
//
//  Created by 유가람 on 7/2/24.
//

#include <stdio.h>
#include <conio.h>

void main(){
    char c;
    FILE *fp;       //파일 포인터 선언
    
    fp=fopen("sample2", "w");       //읽기 전용 개방
    for(c='A'; c<='Z'; c++)
        fputc(c, fp);               //A~Z까지 출력
    
    getch();                        //키보드 입력까지 대기
    fclose(fp);                     //파일 포인터 fp가 가르키는 파일 닫음
    
    fp=fopen("sample2", "r");       //읽기 전용 개방
    while (!feof(fp)) {
        printf("%c", c=fgetc(fp));  //파일 시작부터 끝까지 차례대로 1문자씩 읽고 표시
    }
    fclose(fp);
}
