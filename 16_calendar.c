/*8) write a program to accept birth date and month from user. decide zodiac sign from below table 
Aries: March 21–April 19
Taurus: April 20–May 20
Gemini: May 21–June 21
Cancer: June 22–July 22
Leo: July 23–August 22
Virgo: August 23–September 22
Libra: September 23–October 22
Scorpio: October 24–November 21
Sagittarius: November 22–December 21
Capricorn: December 22–January 19
Aquarius: January 20–February 18
Pisces: February 19–March 20
  
*/
 #include <stdio.h> 
 void main()
 {
    int month,date;
    printf("plz enter your brith date :");
    scanf("%d",&date);

    printf("plz enter your brith month :");
    scanf("%d",&month);
    
   
  
    if(month==1 && date<=19 && date<=31)
    {
        printf("\nyour zodiac is Capricorn.");
    }
    else if(month==12 && date>=22 && date<=31)
    {
        printf("\nyour zodiac is Capricorn.");
    }
    else if(month==12 && date<=21 && date<=31)
    {
        printf("\nyour zodiac is Sagittarius.");
    }
    else if(month==11 && date>=22 && date<=30)
    {
        printf("\nyour zodiac is Sagittarius");
    }
    else if(month==11 && date<=21 && date<=30)
    {
        printf("\nyour zodiac is Scorpio.");
    }
    else if(month==10 && date>=23 && date<=31)
    {
        printf("\nyour zodiac is Scorpio.");
    }    
    else if(month==10 && date<=22 && date<=31)
    {
        printf("\nyour zodiac is Libra.");
    }
    else if(month==9 && date>=23 && date<=30)
    {
        printf("\nyour zodiac is Libra.");
    }
    else if(month==9 && date<=22 && date<=30)
    {
        printf("\nyour zodiac is Virgo.");
    }
    else if(month==8 && date>=23 && date<=31)
    {
        printf("\nyour zodiac is Virgo.");
    }
    else if(month==8 && date<=22 && date<=31)
    {
        printf("\nyour zodiac is Leo.");
    }
    else if(month==7 && date>=23 && date<=31)
    {
        printf("\nyour zodiac is Leo.");
    }
    else if(month==7 && date<=22 && date<=31)
    {
        printf("\nyour zodiac is Cancer.");
    }
    else if(month==6 && date>=22 && date<=30)
    {
        printf("\nyour zodiac is Cancer.");
    }
    else if(month==6 && date<=21 && date<=30)
    {
        printf("\nyour zodiac is Gemini.");
    }
    else if(month==5 && date>=21 && date<=31)
    {
        printf("\nyour zodiac is Gemini.");
    }
    else if(month==5 && date<=20 && date<=31)
    {
        printf("\nyour zodiac is Taurus.");
    }
    else if(month==4 && date>=20 && date<=30)
    {
        printf("\nyour zodiac is Taurus.");
    }
    else if(month==4 && date<=19 && date<=30)
    {
        printf("\nyour zodiac is Aries.");
    }
    else if(month==3 && date>=21 && date<=31)
    {
        printf("\nyour zodiac is Aries.");
    }
    else if(month==3 && date<=20 && date<=31)
    {
        printf("\nyou zodiac is Pisces.");
    }
    else if(month==2 && date>=19 && date<=30)
    {
        printf("\nyour zodiac is Pisces.");
    }
    else if(month==2 && date<=18 && date<=30)
    {
        printf("\nyour zodiac is Aquarius.");
    }
    else if(month==1 && date>=20 && date<=31)
    {
        printf("\nyour zodiac is Aquarius.");
    }
    else
    {
        printf("\nEnter vailed number.");
    }
    
    

 }