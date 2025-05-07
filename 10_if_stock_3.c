 /*
    write a program to findout which stock will give better return in terms dividend per 100 Rs from given 2 stock's market price and last year dividend.
    ______________________________________________________________________________.....
    steps
    1 = creat variyebles.
    2 = tack share and dividend value from user.
    3 = creat logic for counting dividend and more.
    4 = displaying all results.
*/
#include<stdio.h>
void main()
{
   
   
   float return1,return2,dividend1,dividend2,price1,price2;
   
   printf("Enter 1st share amount :- ");
   scanf("%f",&price1);
   
   printf("\n plz Enter last year dividend of 1st share :- ");
   scanf("%f",&dividend1);
   
   printf("\n plzEnter 2nd share amount :- ");
         scanf("%f",&price2);
   
   printf("\n plzEnter last year dividend of 2nd share :- ");
         scanf("%f",&dividend2);
   
   return1 = (dividend1 / price1) * 100;
   return2 = (dividend2 / price2) * 100;
   
   if(return1 > return2)
   {
       printf("\n1st share is batter than 2nd share.");
       printf("\nreturn per Rs.100 = %f",return1);
   }
   else
   {
       printf("\n2nd share is batter than 1st share.");
       printf("\nreturn per Rs.100 = %f",return2);
   }
    

   printf("\nthank you visit ");
}