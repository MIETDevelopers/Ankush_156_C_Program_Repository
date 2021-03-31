// Program to take array as an argument//

/* Name -  Ankush kumar
   class - cse_A2_156
   */

#include <stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
int fnToTakeArrAsArgs(int x[]);		//FUNCTION INITIALIZATION
int main(){		//STARTING OF MAIN PROGRAM
  int arr[3]={45,55,65};	//DECLARING ARRAY
  printf("Hee\n");
  fnToTakeArrAsArgs(arr);	//FUNCTION CALLING
  return 0;		//RETURN STATEMENT
}
int fnToTakeArrAsArgs(int x[]){		//FUNCTION DEFINITION
  printf("X=%d",x[2]);
}