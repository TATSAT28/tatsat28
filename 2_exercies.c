/*
1)  write a program to findout whether given year is millennium year or not. using simple decision making statements. using simple decision making statements.


 1 =  creat variable of the year
 2 =  plz enter your year
 3 =  millennium year = year/1000
 3 = creat logic for saying  millennium year or no
 4 = print answer.
 5 = creat logic for saying  millennium year or not.
 6 = print answer.

*/

    #include<stdio.h>
void main()
{
    int millennium,year;

  
    printf("\n plz Let's know about millennium year.");

    printf("\nplz Enter your current year. :- ");
    scanf("%d",&year);

    millennium = year  / 1000;

    if(year<1000)
    {
        printf("\nplz Enter a viled year.try again plz.");
    }

    if(year>1000)
    {
        millennium = year / 1000;
        printf("\nyear = %d",millennium);
    }

    printf("\nGood boy");
}