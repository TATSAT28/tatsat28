/*
  THE write a program to write number from 100,98,96,94............0
  1 creat vribal number
  2 diplay the number 100
  3 number = number - 2
  4 diplay nuber
  5 diplay nice try
*/
#include<stdio.h>
void main ()
{
    int number=100;
    while(number >=0)  
    {
        printf("%d ", number); 
        number = number - 2; 
    }
    printf("\n nice");

}