//
//  main.c
//  c_22
//
//  Created by 유가람 on 4/5/24.
//

#include <stdio.h>
void main(){
    char s1[] = "Computer";
    char s2[] = "Science";
    puts(s1);
    puts(s2);
    // \n을 사용하지 않아도 자동으로 줄이 바뀌어 출력
    
    printf("%s", s1);
    printf("%s", s2);
    // \n을 사용하지 않아서 문자열이 연결되어 출력
}
