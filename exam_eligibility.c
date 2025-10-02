/*
Name   :Peter Ngubiru
Reg. No:CT101/G/26455/25
Description:a program to check eligibility for exams
*/

#include<stdio.h>

//main function
int main(){
    int average_marks, attendance;
    
    printf("enter your average marks:");
    scanf("%d", & average_marks);
    
    if   (average_marks>=40) printf("enter your attendance:");
    else   printf("your are not eligible\n");
    scanf("%d",&attendance);

    if    (attendance>=75) printf("you are qualified\n");
    else   printf("you are not eligible\n");

return 0;
    
}