/*
computing simple intrest SI=P*(rate/100)*time
*/
#include<stdio.h>
int main(){
    //variable declaration  principle,rate,time
    float principle, rate, time, interest;
    //enter amount
    printf("enter principle amount ksh.");
    scanf("%f",&principle);
    //enter rate
    printf("enter rate %");
    scanf("%f",&rate);
    //enter time
    printf("enter time ");
    scanf("%f",&time);
    //interest
    interest=principle*rate/100*time;
    //display answer
    printf("simple interest is ksh.%.2f",interest);
    return 0;

}