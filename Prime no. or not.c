// Program to print whether a no. is prime or not //

/* Name - Ankush Kumar
   Class - CSE_156_A2
*/

#include<stdio.h> //Pre-Process directive to include standard input output header file
int main() //main function body stat=rting
{
      int num,i=1,c=0; //variable declaration of integer data type
      printf("/*To Check Number Prime or Not*/\n\nEnter Number : "); //Printing statement
      scanf("%d",&num); //taking Number as a input from the user 
      while(i<=num) //while loop 
      {
            if(num%i==0)
            c++;
            i++;
      }
      if(c==2) //if the condition is true, it will print the prime number
            printf("\n%d is Prime Number",num); 
      else // else, it will print the number is not prime number
            printf("\n%d is Not Prime Number",num);
      return 0;
}
