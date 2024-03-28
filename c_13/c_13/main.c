//
//  main.c
//  c_13
//
//  Created by 유가람 on 3/28/24.
//

/*선행처리기 매크로 함수의 사용*/
#include <stdio.h>
#define Hap1(x,y) x + y
#define Hap2(x,y) ((x) + (y))
#define Gop1(x,y) x * y
#define Gop2(x,y) ((x) * (y))
void main(){
    int h1, h2, g1, g2;
    h1 = 10 * Hap1(3,4);
    h2 = 10 * Hap2(3,4);
    g1 = Gop1(1 + 2, 3 + 4);
    g2 = Gop2(1 + 2, 3 + 4);
    printf("h1 = %d, h2 = %d \n", h1, h2);
    printf("g1 = %d, g2 = %d \n", g1, g2);
}

//매크로 함수는 선행처리기에 의한 단순 치환 방식으로 전달인자의 자료형 명시할 필요 없음,
//어떠한 자료형 변수를 인자로 전달해도 잘 동작함
//코드가 짧은 경우 함수로 정의하는 것보다 속도가 빠르다
