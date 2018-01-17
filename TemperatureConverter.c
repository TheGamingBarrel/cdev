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
			x = (x - 32) * 5/9;
			
		       	
			printf( "The temperature in celsius will be %d", x );
		break;

		default:
		printf("Please enter f or c.");
		break;
	}


	getchar();
	printf( "\n");
	return 0;

}

