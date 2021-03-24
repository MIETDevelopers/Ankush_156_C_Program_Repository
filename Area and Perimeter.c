#include <stdio.h>		//PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD LIBRARY INPUT OUTPUT HEADER FILE
int main(){		//STARTING OF MAIN PROGRA
	int choice;		//DECLARING VARIABLES NAMED "choice" OF DATA TYPE: int
	float side, length, breadth, radius, area, perimeter;	/*DECLARING VARIABLES NAMED
	"side", "length", "breadth", "radius", "area" AND "perimeter" OF DATA TYPE:float*/
	printf("1. CIRCLE\n");	//PRINT CHOICE NO. 1
	printf("2. SQUARE\n");	//PRINT CHOICE NO. 2
	printf("3. RECTANGLE\n");//PRINT CHOICE NO. 3
	scanf("%d", &choice);	//READ USER INPUT
	printf("Enter your choice = %d\n", choice);		//PRINT USER CHOICE
	switch(choice)		//SWITCH STATEMENT
	{
		case 1:		//CASE NO. 1
			scanf("%f", &radius);	//READ USER INPUT
			printf("Enter Radius = %.2f\n", radius);	//PRINT RADIUS OF CIRCLE
			area = 3.14*radius*radius;	//FORMULA OF AREA OF CIRCLE
			printf("Area of Circle = %.2f\n", area);	//PRINT AREA OF CIRCLE
			perimeter = 2*3.14*radius;	//FORMULA OF PERIMETER OF CIRCLE
			printf("Perimeter of Circle = %.2f\n",perimeter);	//PRINT PERIMETER OF CIRCLE
			break;	//BRAEK-STATEMENT WHICH WILL PRINT ONLY CASE NO. 1
		case 2:		//CASE NO. 2
			scanf("%f", &side);		//READ USER INPUT
			printf("Enter Side of Square = %.2f\n", side);	//PRINT SIDE OF SQUARE
			area = side*side;	//FORMULA OF AREA OF SQUARE
			printf("Area of Square = %.2f\n", area);	//PRINT AREA OF SQUARE
			perimeter =  4*side;	//FORMULA OF PERIMETER OF SQUARE
			printf("Perimeter of Square = %.2f\n", perimeter);	//PRINT PERIMETER OF SQUARE
			break;	//BRAEK-STATEMENT WHICH WILL PRINT ONLY CASE NO. 2
		case 3:		//CASE NO. 3
			scanf("%f %f", &length, &breadth);	//READ USER INPUT
			printf("Enter Length of Rectangle = %.2f\n", length);	//PRINT LENGTH OF RECTANGLE
			printf("Enter Breadth of Rectangle = %.2f\n", breadth);	//PRINT BREADTH OF RACTANGLE
			area = length*breadth;		//FORMULA OF AREA OF RECTANGLE
			printf("Area of Rectangle = %.2f\n", area);		//PRINT AREA OF RECTANGLE
			perimeter = 2*(length+breadth);		//FORMULA OF PERIMETER OF RACTANGLE
			printf("Perimeter of Rectangle = %.2f\n", perimeter);	//PRINT PERIMETER OF RECTANGLE
			break;	//BRAEK-STATEMENT WHICH WILL PRINT ONLY CASE NO. 3
		default :	//DEFAULT-STATEMENT WHEN ALL THE CASE IS NOT APPLIED THEN DEFAULT STATEMENT GIVES THE OUTPUT
			printf("Please Enter a Valid Chice....!!!!!");	//PRINT DEFAULT-STATEMENT
			break;	//BRAEK-STATEMENT WHICH WILL PRINT ONLY DEFAULT-STATEMENT
	}return 0;		//RETURN STATEMENT
}

#include <stdio.h>	//PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE

int main()	//STARTING OF MAIN PROGRAM
{
	float radiusofcircle, sideofsquare, lengthofrectangle, bredthofrectangle;	/*DECLARING
	VARIABLES NAMED "radiusofcircle", "sideofsquare", "lengthofrectangle", "bredthofrectangle" */
	scanf("%f %f %f %f", &radiusofcircle, &sideofsquare, &lengthofrectangle, &bredthofrectangle);
	/* READ radiusofcircle, sideofsquare, lengthofractangle, bredthofrectangle */
	printf("\nArea of Circle =%f ",3.14*radiusofcircle*radiusofcircle);	//PRINT AREA OF CIRCLE
	printf("\nPerimeter of Circle =%f ",2*3.14*radiusofcircle);	//PRINT PERIMETER OF CIRCLE
	printf("\nArea of Square = %f",sideofsquare*sideofsquare);	//PRINT AREA OF SQUARE
	printf("\nPerimeter of Square =%f",4*sideofsquare);	//PRINT PERIMETER OF SQUARE
	printf("\nArea of Rectangle =%f",lengthofrectangle*bredthofrectangle);	//PRINT AREA OF RECTANGLE
	printf("\nPerimeter of Rectangle =%f",2*(lengthofrectangle+bredthofrectangle));	//PRINT PERIMETER OF RECTANGLE
	return 0;	//RETURN STATEMENT
}