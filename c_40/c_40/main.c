//
//  main.c
//  c_40
//
//  Created by 유가람 on 4/24/24.
//

#include <stdio.h>
void main(){
    enum syllable {
        Do, Re, Mi, Fa
    } tone; //enum syllable 타입의 tone 선언
    for(tone = Do; tone <= Fa; tone += 1){
        switch (tone) {
            case Do:
                printf("도는 도라지 \n");
                break;
            case Re:
                printf("레는 레미콘 \n");
                break;
            case Mi:
                printf("미는 미나리 \n");
                break;
            case Fa:
                printf("파는 파라솔 \n");
                break;
        }
    }
}
