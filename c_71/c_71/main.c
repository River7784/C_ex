//
//  main.c
//  c_71
//
//  Created by 유가람 on 6/18/24.
//

#include <stdio.h>

struct member{
    char *name;
    char *sex;
    int age;
};

void main(){
    int i;
    
    struct member a[4] = {
        {"a", "male", 10},
        {"b", "female", 30},
        {"c", "male", 20},
        {"d", "female", 35}
    };
    
    for (i = 0; i < 4; i++)
        printf("%s %s %d\n", a[i].name, a[i].sex, a[i].age);
    
}
