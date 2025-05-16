/*
   the write a program to calclate compound interest from the amout interest and year give by the use 

   1   the creat veribal amonut,interest,yeaer
   2  plz enter the input from user 
   3  interest from 1 year
   4  interest = (amount * rate*1)/100   
   5  cleclat the amount
   amount = amount + intrest
   diplay nice tryy   

*/
#include<stdio.h>
void main ()
{
    float rate,amount,interest;
    int year,count;
    printf("plz enter amount");
    scanf("%f",&amount);
    printf("plz enter rate");
    scanf("%f",&rate);
    printf("plz enter the year");
    scanf ("%d",&year);
    count = 1;
    while (count<=year)
    {
         interest = (amount*rate*1)/100;
         amount = amount + interest;
         count = count + 1;
    }
     printf("interest = %f amount = %f",interest,amount);
}