// Program to check no. is armstrong or not using while loop //

/* Name - Ankush Kumar
   Class - CSE_156_A2
*/


#include <stdio.h> //Pre-Process directive to include standard input output header file
int main() { //Main function body starting
    int num, originalNum, remainder, result = 0; //variable declaration of integer data type
    printf("Enter a three-digit integer: ");
    scanf("%d", &num); //taking num as a input from the user 
    originalNum = num; 

    while (originalNum != 0) {
       //remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       //removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)//if the condition is true, it will print the number is an Armstrong number
        printf("%d is an Armstrong number.", num);
    else // else, it will print the number is not an Armstrong number
        printf("%d is not an Armstrong number.", num);

    return 0;
}