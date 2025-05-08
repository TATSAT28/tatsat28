/*
    write a program to accept 2 digit amount from user and display it in words 
    input : 35 output eight five 
    steps 
        1) create variable amount,first_digit,last_digit 
        2) accept input from user into amount variable
        3) get first_digit of amount 
           first_digit(8) = amount/10
        4) get last_dight of amount 
            last_digit(5) = amount % 10    
        5) check first_digit and display words accordingly 
        6) check last_digit and display words accordingly 
*/
#include<stdio.h>
void main()
{
    int amount,first_digit,last_digit;
    printf(" plzenter 2 digit amount :");
    scanf("%d",&amount); 

    first_digit = amount / 10; 
    last_digit = amount % 10; 

    if(first_digit==1) 
    {
        printf("one ");
    }
    else if(first_digit==2)
    {
        printf("two ");
    }
    else if(first_digit==3)
    {
        printf("three ");
    }
    else if(first_digit==4)
    {
        printf("four ");
    }
    else if(first_digit==5)
    {
        printf("five ");
    }
    else if(first_digit==6)
    {
        printf("six ");
    }
    else if(first_digit==7)
    {
        printf("seven ");
    }
    else if(first_digit==8)
    {
        printf("eight ");
    }
    else if(first_digit==9)
    {
        printf("nine ");
    }
    else 
    {
        printf("zero ");
    }

    if(last_digit==1) 
    {
        printf("one ");
    }
    else if(last_digit==2)
    {
        printf("two ");
    }
    else if(last_digit==3)
    {
        printf("three ");
    }
    else if(last_digit==4)
    {
        printf("four ");
    }
    else if(last_digit==5)
    {
        printf("five ");
    }
    else if(last_digit==6)
    {
        printf("six ");
    }
    else if(last_digit==7)
    {
        printf("seven ");
    }
    else if(last_digit==8)
    {
        printf("eight ");
    }
    else if(last_digit==9)
    {
        printf("nine ");
    }
    else 
    {
        printf("zero ");
    }
} 