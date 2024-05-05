//
//  main.c
//  c_50
//
//  Created by 유가람 on 5/4/24.
//

#include <stdio.h>
#pragma warning(disable:4996)
void main(){
    int a, b, c, n;
    printf("maximum val = ? ");
    scanf("%d", &n);
    printf("A\tB\tC \n");
    for(a = 1; a <= n; a++){
        for(b = 1; b <= n; b++){
            for(c = 1; c <= n; c++){
                if(a*a == b*b + c*c){
                    printf("%d\t%d\t%d\t \n", a, b, c);
                }
            }
        }
    }
    
}
