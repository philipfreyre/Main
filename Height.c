/* Author: Philip Freyre
 * page 97, problem #7
 * 27-Jan-2015
 */

#include <stdio.h>

int main(void)                                               //main function
{
	float cent;                                                //float variable length in centimeters
	float inch;                                                //float variable length in inches

	printf("Please enter your height in inches: ");            //displays "Enter your height..."
	scanf("%f", &inch);                                        //asks user to input their height in inches
	cent = inch * 2.54;                                        //converts inches to centimeters
	printf("Your height in centimeters is %f\n", cent);        //outputs user height converted to centimeters

	getchar();	                                               //written to ensure window doesn't disappear
	getchar();	                                               //written to ensure window doesn't disappear
	return 0;                                                  //End of int main(void)
}     
