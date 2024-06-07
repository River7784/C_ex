//
//  main.c
//  c_62
//
//  Created by 유가람 on 7/6/24.
//

#include <stdio.h>
void main(){
    int A[3][3], B[3][3], C[3][3];  //3*3 2차원 배열 선언
    int i, j;
    
    //첫번째 행렬
    printf("*** Input the first matrix (3x3) *** \n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &A[i][j]);      //배열에 자료 입력
    
    printf("\t## A ## \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            printf("%d", A[i][j]);
        printf("\n");
    }
    
    //두번째 행렬
    printf("*** Input the second matrix (3x3) *** \n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &B[i][j]);      //배열에 자료 입력
    
    printf("\t## B ## \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            printf("%d", B[i][j]);
        printf("\n");
    }
    
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            C[i][j]=A[i][j]+B[i][j];        //행렬의 합 계산
    
    printf("*** C = A+B *** \n");
    printf("\t ## C ## \n");
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            printf("%2d", C[i][j]);     //반복문으로 행렬 C 저장 후 출력
        printf("\n");
    }
}
