// Program to print Fibonacci sequence using loop //

/* Name - Ankush Kumar
  Class - CSE_156_A2
*/





#include<stdio.h>    //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY INPUT OUTPUT HEADER FILE
 
int main()     //STARTING OF MAIN PROGRAM
{
   int n, firstnum = 0, secondnum = 1, next, i; /*DECLARING VARIABLE NAMED "n", 
   "firstnum", "secondnum", "next" AND "i"*/
   scanf("%d",&n);   //READ USER INPUT
   printf("Enter the number of terms = %d\n", n);  //PRINT USER INPUT
 
   printf("First %d terms of Fibonacci series are :-\n",n);    //PRINT FIBONACCI SEQUENCE
 
   for ( i = 0 ; i < n ; i++ )   //FOR LOOP(INITIALIZATION;CONDITION;INCREMENT/DECREMENT)
   {     //STARTINGN OF FOR LOOP BODY
      if ( i <= 1 )  //IF-STATEMENT
         next = i;
      else  //ELSE-STATEMENT
      {  //STARTING OF ELSE-STATEMENT
         next = firstnum + secondnum;
         firstnum = secondnum;
         secondnum = next;
      }
      printf("%d\n",next);    //PRINT VALUE OF "next" VARIABLE
   }
 
   return 0;   //RETURN STATEMENT
}