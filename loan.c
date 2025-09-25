/*a program to verify the qualifications
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
    if(age>=27) printf("enter your annual income");
    else printf("Unfortunately you don't qualify for a loan");
    scanf("%f",&income);
    //input validation
    if (income>=30000) printf("Congratulations you qualify for a loan");
    else printf("Unfortunately you don't qualify for a loan");
    return 0;
    }