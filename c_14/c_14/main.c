//
//  main.c
//  c_14
//
//  Created by 유가람 on 3/28/24.
//

/*조건부 컴파일*/
#include <stdio.h>
#define CONDITION 1
void main(){
#if CONDITION
    printf("\n A 프로그램 컴파일");
#else
    printf("\n B 프로그램 컴파일");
#endif
}

//#if는 주어진 조건이 참이라면 바로 아래 블록을 컴파일러에게 넘긴다
//참이 아니라면 삭제하여 없는 것으로 취급한다.
