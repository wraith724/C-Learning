/*
Name:Peter Ngubiru
Reg No.:CT101/G/26455/25
Description:a program to verify the qualifications
for receiving a loan
*/

#include<stdio.h>

//main function
int main(){
    
    //variable declaration
    float age, income;
    
    //enter age
    printf("enter your age");
    scanf("%f",&age);
    
    if(age>=21) printf("enter your annual income");
    else printf("Unfortunately you don't qualify for a loan");
    scanf("%f",&income);
    
    //input validation
    if (income>=21000) printf("Congratulations you qualify for a loan");
    else printf("Unfortunately you don't qualify for a loan");
    
    return 0;

    }


