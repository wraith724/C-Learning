/*
Name   :Peter Ngubiru
Reg. No:CT101/G/26455/25
Description:a program to check total bill of water consumed
*/

#include<stdio.h>

//main function
int main(){
    float units_consumed, total_bill;
    
    printf("enter the number of units consumed:");
    scanf("%f",& units_consumed);
    
    if(units_consumed <=30) {
        total_bill= units_consumed * 20;
    }
    else if(units_consumed> 30 && units_consumed<=60){
    total_bill= ( 30 * 20 ) + (units_consumed - 30) * 25;
    }
    else(units_consumed>60); {
    total_bill= (30 * 20) + (30 * 25) + (units_consumed - 60) * 30;
    }
    printf("total bill is kes %.2f\n",total_bill);
   
    return 0;
}