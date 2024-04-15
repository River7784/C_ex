//
//  main.c
//  c_31
//
//  Created by 유가람 on 4/15/24.
//

#include <stdio.h>
#pragma  warning(disable:4996);
void main(){
    int in_money, coin_500, coin_100, coin_50, coin_10;
    printf(" 동전으로 교환할 금액을 입력하세요 ");
    scanf("%d", &in_money);
    coin_500 = in_money / 500;
    in_money = in_money % 500;
    coin_100 = in_money / 100;
    in_money = in_money % 100;
    coin_50 = in_money / 50;
    in_money = in_money % 50;
    coin_10 = in_money / 10;
    in_money = in_money % 10;
    printf("\n 오백원 =>  %d개 \n", coin_500);
    printf("\n 백원 =>  %d개 \n", coin_100);
    printf("\n 오십원 =>  %d개 \n", coin_50);
    printf("\n 십원 =>  %d개 \n", coin_10);
    printf("\n 바꾸지 못한 잔돈 =>  %d개 \n", in_money);
}
