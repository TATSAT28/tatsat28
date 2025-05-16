/*  
    write a program to findout given number is composite number or not 
    creat the variyabal is number
    1   create variable number,reminder,divisor
    2   accept input from user into number variable
    3   store 2 into divisor
    4   get reminder by dividing number with divisor
        reminder = number % divisor
    5   if reminder is zero then
        print message number is not prime number

    6  if reminder is zero then
        print message number is not prime number 

*/
#include<stdio.h>
void main ()
{
      int number, reminder, divisor;
    printf(" plz enter number");
    scanf("%d", &number);

    divisor = 2;

    while(divisor<number)
 {   
        reminder = number % divisor; 
        if (reminder == 0)
        {
            printf(" sorry this is composite");
            break;
}
      divisor = divisor + 1;
}
    if(divisor == number)
    {
        printf("\n it is  not prime number");
    }
}

