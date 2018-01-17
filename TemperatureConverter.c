#include <stdio.h>
int main()
{
	int x;
	char type;
	printf("Would you like to convert from farenheit to celsiu or from celsius to farenheit? Press F if you would like to convert from Farenheit to Celsius or C if you would like to convert from Celsius to Farenheit:  ");
	scanf("%c",&type);	
	switch(type)
	{
		case 'c':
			printf("Please enter your temperature in celsius that you would like to convert: " );
			scanf( "%d", &x ); 
				/* Note, this does not stop anyone from entering normal text, this will not cause a runtime error, rather it will take the ASCII Value of a character and use that as the number instead.*/ 

			x = x * 9/5 + 32;  
				/* This operation takes the input (x) multiplies it by 9 and divides it by 5, then adds 32 to it, as this is the correct way to convert celsius to farenheit. */
			printf ( "The temperature in farenheit will be %d", x );

		break;

		case 'f':
			printf("Please enter your temperature in farenheit that you would like to convert: " );
			scanf( "%d", &x );
				/* This does the same as the operation above where it will retrieve the input from the user. */
			x = (x - 32) * 5/9;
				/* This operation does the previous arithmetic operation, but in reverse. */
		       	
			printf( "The temperature in celsius will be %d", x );
		break;

		default:
		printf("Please enter f or c.");
		 		/* This is just to a catch to make sure that the user only inputs f or c. */
		break;
	}


	getchar();
	printf( "\n");
	return 0;

}

