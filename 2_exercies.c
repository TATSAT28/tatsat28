/*
1)  write a program to findout whether given year is millennium year or not. using simple decision making statements. using simple decision making statements.


 
 
     step2 
     1) create variable year and accept input from user 
     2) check whether particular year is millennium year or not
         if year is divisble by 1000 then 
             display message year is millennium year
         if year is not divisble by 1000 then 
             display message year is not millennium year
 */
#include<stdio.h>
void main()
{
    int year;
    printf("Enter year");
    scanf("%d",&year);
    if(year%1000==0)
    {
        printf("year is millennium year");
    }

    if(year%1000!=0)
    {
        printf("year is nor millennium year");
    }
}   
