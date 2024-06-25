//
//  main.c
//  c_74
//
//  Created by 유가람 on 6/25/24.
//

#include <stdio.h>

union tag{
    int n;
    float i;
} v1, *pt;

void main(){
    float k;
    
    pt=&v1;
    v1.n=10;
    v1.i=20.0;
    k=pt->i;
    
    printf("%f",k);
}
