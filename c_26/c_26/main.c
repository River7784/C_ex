//
//  main.c
//  c_26
//
//  Created by 유가람 on 4/8/24.
//

#include <stdio.h>
void main(){
    int a = 10, b = 3, c = 1;
    a *= (b-1);
    b /= 2 + 3;
    c += 2;
    printf("a = %d, b = %d, c = %d \n", a, b, c);
    
    int d = 10, e;
    e = (d > 15) ? (d + 1) : (d - 1);
    printf("e = %d", e);
}
