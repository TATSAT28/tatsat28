/*
16) write a program to findout whether given number is Armstrong   Numbers or not 
1=creat a variabal=NUMBER,arm,REMANDER,VERIYABAL
2= input in accept user num =153
3=   REMANDER=nUMBER%10=(3)
     arm=(REMANDER*REMANDER*REMANDER)+arm(27+0)
     NUMBER= NUMBER/10(15\10=1)
     if stetmant of print 
     if (VERIYABAL==NUMBER)
     dispaly in result
     goood job brooooooo
*/
#include<stdio.h>
void main()
{
    int number,arm=0,remander,A;
    printf(" plzzzzEnter number: ");
    scanf("%d",&number);
    A=number;
    while (number>0)
    {
        remander=number%10;
        arm=(remander*remander*remander)+arm;
        number=number/10;

    }
    if(A==arm)
    {
        printf("this a armstrong number brooooo");

    }
    else{
        printf(" sorryyy this not a armstrong number");

        
    }
    printf("\ngood job bro ");
}