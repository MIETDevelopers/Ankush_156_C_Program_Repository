// Programe to do calculation using function //

/* Name -  Ankush kumar
   class - cse_A2_156
   */

#include<stdio.h> //preprocessive directive to include standard input and output functions  												

int main() //main function															
{
	int a,b,sum,minus,mult,Divide; //variable decleartion									

	printf("Enter the first number= "); //printing the value of first number								

	scanf("%d",&a);	//taking input from user												

	printf("Enter the second number= ");							
													
	scanf("%d",&b);

	sum=a+b;

	minus= a-b;

	mult= a*b;

	Divide= a/b;


	printf("Answer is = %d , %d, %d, %d", sum,minus,mult,Divide); 
	return 0;														
}