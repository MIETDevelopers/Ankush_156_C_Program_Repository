// Programe to demonstrate the use of malloc(), calloc(), and free() functions //
/* Name -  Ankush kumar
   class - cse_A2_156
   */

#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
#include <stdlib.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY HEADER FILE

int main()      //STARTING OF MAIN PROGRAM
{
    int n, i, *ptr, sum = 0;    //DECLARATION OF VARIABLES

    scanf("%d", &n);    //READ USER INPUT
    printf("Enter number of elements: %d\n", n);    //PRINT USER INPUT

    ptr = (int*) malloc(n * sizeof(int));   
 
    // if memory cannot be allocated
    if(ptr == NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        printf("Enter elements: %d\n", *(ptr + i));
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);
  
    // deallocating the memory
    free(ptr);

    return 0;
}
