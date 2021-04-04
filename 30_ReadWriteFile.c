// Programe to read and write in a file //

/* Name -  Ankush kumar
   class - cse_A2_156
   */

#include <stdio.h>
#include <stdlib.h>// important to include

int main()
{
   FILE *fptr;  // declaring a file type variable.
   fptr = fopen("./txt.txt", "w"); // opening a file in write mode
   if (fptr == NULL)// condition to verify that file is opened or not
   {
      printf("Error! in opening a file ");
      exit(1);
   }
   fprintf(fptr, "hello world"); // writing in file

   fclose(fptr);

   return 0;
}