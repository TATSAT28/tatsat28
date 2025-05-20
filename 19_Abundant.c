/*14) write a program to findout whether given number is Abundant Numbers or not 
 1   create variable number,divisor,reminder,sum
    2   accept number from user into number 
    3   store 1 in divisor & store 0 into sum
    4   reminder = number % divisor
    5   if reminder is zero then
    6   sum = sum + divisor
    7   divisor = divisor + 1
   

*/

#include <stdio.h>
void main()
{
    int number, divisor, reminder, sum;
    printf(" plz Enter number");
    scanf("%d", &number);
    for(divisor=1,sum=0;divisor < number;)
    {
        reminder = number % divisor;
        if (reminder == 0)
        {
            sum = sum + divisor;
        }
        divisor++;
    }
    if(sum >= number)
    {
        printf("this is Abundant  number");
    }
    else 
    {
        printf(" sorry this is not Abundant number");
    }
}