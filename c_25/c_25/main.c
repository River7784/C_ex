//
//  main.c
//  c_25
//
//  Created by 유가람 on 4/6/24.
//

#include <stdio.h>
void main(){
    int a = 4, b = 7, c, d, e;
    c = a > 2 && b <= 7;
    printf("c = %d \n", c);
    d = a < 2 || b <= 7;
    printf("d = %d \n", d);
    e = !a;
    printf("e = %d \n", e);
}
