// Program to calculate sum of digit using while loop //

/* Name - Ankush Kumar
   Class - CSE_156_A2
*/
#include <stdio.h> //Pre-Process directive to include standard input output header file
int main() //main function body starting
{
   int n, t, sum = 0, remainder; //variable declaration of integer data type

   printf("Enter an integer\n"); //Printing statement
   scanf("%d", &n); //taking Number as a input from the user

   t = n;

   while (t!= 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }
   // Printing the sum of digits
   printf("Sum of digits of %d = %d\n", n, sum);

   return 0;
}
