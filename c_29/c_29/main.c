//
//  main.c
//  c_29
//
//  Created by 유가람 on 4/13/24.
//

#include <stdio.h>
void main(){
    int a, b, c;
    a = 10; b = 20; c= 30;
    printf("a + b * c = %d \n", a + b * c); //a + (b * c)의 의미
    printf("a = b += 2 * c -> %d \n", a = b += 2 * c);
    printf("a = (b > c) ? b : c -> a = %d \n", a = (b > c) ? b : c);
    printf("a / b * c = %d \n", a / b * c );
    printf("a *= b =c + 5 -> a = %d \n", a *= b =c + 5);
}
