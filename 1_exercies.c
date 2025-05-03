/*create the variable purchaseing and sales the prize
1 = if purchase prize < sales 
2 = than diplay profit
3 = if purchase prize > sales
4 = than diplay loss
5 = if purchase prize == sales
6 = then diplay  (no profit and no looss)
7 = diplay be cool bro
*/
#include<stdio.h>
void main()
{
float purchase_prize,sales_prize;
printf("plz enter the value of purches the prize");
scanf(" %f",&purchase_prize);

printf ("plz enter the valu of sales prize");
scanf ("%f",&sales_prize);

if (purchase_prize < sales_prize)
{
    printf ("profit");

}
if (purchase_prize > sales_prize)
  {
    printf ("loss");

  }
  if ( purchase_prize == sales_prize)
  {
    printf("no profit and no loss");
  }
  printf (" be cool bro");
}