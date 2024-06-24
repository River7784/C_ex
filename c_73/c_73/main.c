//
//  main.c
//  c_73
//
//  Created by 유가람 on 6/24/24.
//

#include <stdio.h>

struct student{
    char name[20];
    int kor;
    int eng;
    int math;
    int total;
    float avg;
};

void main(){
    struct student score[3];
    int i;
    for(i=0; i<3; i++){
        printf("이름을 입력하세요 : ");
        scanf("%s", score[i].name);
        printf("국어 : ");
        scanf("%s", &score[i].kor);
        printf("영어 : ");
        scanf("%s", &score[i].eng);
        printf("수학 : ");
        scanf("%s", &score[i].math);
        
        score[i].total = score[i].kor + score[i].math + score[i].eng;
        score[i].avg = (float) score[i].total/3;
        
        printf("이름 : %s, 국어 : %d, 영어 : %d, 수학 : %d \n", score[i].name, score[i].kor, score[i].eng, score[i].math);
        printf("총점 : %d, 평균점수 : %f \n\n", score[i].total, score[i].avg);
    }
}
