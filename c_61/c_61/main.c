//
//  main.c
//  c_61
//
//  Created by 유가람 on 6/6/24.
//

#include <stdio.h>
#define N 10

void input(int scr[], int size);
int sum2(int scr[], int size);
void sort(int scr[], int size);

void main(){
    int score[N]={0};
    int j, sum;
    float average;
    
    input(score, N);
    sum = sum2(score, N);
    average = (float) sum/N;
    printf("평균 : %f\n", average);
    
    sort(score, N);
    printf("정렬 된 값 : ");
    for(j = 0; j < N; j++)
        printf("%d ", score[j]);
    printf("\n");
}

void input(int scr[], int size){    //배열을 매개변수로 전달함
    int j;
    for(j = 0; j < size; j++){
        printf("%d번째 숫자를 입력하세요 : ", j+1);
        scanf("%d", &(scr[j]));
    }
}

int sum2(int scr[], int size){
    int sum, j;
    for(sum = 0, j = 0; j < size; j++)
        sum += scr[j];
    return sum;     //합계 반환
}

void sort(int scr[], int size){
    int j, k, temp;
    for(j = 0; j < size-1; j++){
        for(k = size-1; k > j; k--){
            if(scr[k-1] > scr[k]){      //조건문으로 입력받은 점수들 중 큰 점수를 비교해서 순서를 변경
                temp = scr[k-1];
                scr[k-1] = scr[k];
                scr[k] = temp;
            }
        }
    }
}
