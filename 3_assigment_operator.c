/*  
assignment operators
assignment operators are used to assign value to variables. one vary useful assignment operators are = other useful assignment operators also called shortend assignment operators
    += it is used a+=b in case of a = a + b
    -= it is used a-=b in case of a = a - b
    *= it is used a*=b in case of a = a * b
    /= it is used a/=b in case of a = a / b
    %= it is used a%=b in case of a = a % b

*/
#include<stdio.h>
void main ()
{
    int a = 10 , b = 5 ;
    printf("\n a = %d b = %d" , a,b);

    a+=b;
    printf("\n a = %d b = %d" , a,b);

    a-=b;
    printf("\n a = %d b = %d" , a,b);

    a*=b;
    printf("\n a = %d b = %d" , a,b);

    a%=b;
    printf("\n a = %d b = %d" , a,b);

/*
    unary operators
operators which works upon one value is called unary operators

prefix 
a = a + 1 can be written as ++a;

   postfix
   postfix example 
   assume a = 10
   b = a++ // b = 10 and a = 11
   
   */
  int a = 10,b;

  b = ++a; //b = 11 a = 11
  printf("b = %d a = %d",b,a);

  b = a++; //b = 11 a = 12
  printf("\nb = %d a = %d",b,a);


  b = --a; //b = 10 a = 10
  printf("\nb = %d a = %d",b,a);

  b = a--; //b = 10 a = 09
  printf("\nb = %d a = %d",b,a);
 int a = 10,b;



}
