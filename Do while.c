// Programe to demonstrate do while loop //

/* Name -  Ankush kumar
   class - cse_A2_156
   */
#include <stdio.h> //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
int main()  // Main function body starting
{
    int i = 1;
    do  //Do while loop
    {
        printf("%d \n", i);    // Printing the value of interger type 
        i++;                  // Incrementing the value of i
    } while (i <= 10);   // While condition executed
    return 0;
}