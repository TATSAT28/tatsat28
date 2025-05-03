/*
    write a program to convert 24 hours format time and 12 hours format time and display it 
    stepssssss
  1 =   the create variable in hours
  2 =   plz enter the value of hours
  3 =   if (hours < 12) then show AM
  4 =   plz diplay the hours
  5 =  if (hours > 12) then show PM
  6 =  plz diplay the hours
  7 =  diplay good job  
    */
   #include<stdio.h>
   void main
    ()
   {
    float hours;
    printf("plz enter the ours in 24 hours format");
    scanf("%f",&hours);
     if (hours < 12)
     {
       printf("  %.2f AM",hours);
     }
     if (hours > 12)
     {
     printf("%.2f PM",hours);
     }
     printf ("\n good job ");


   }