/* Author: Philip Freyre
 * Page 97, Exercise 8 for CSCI1111
 * Due 29-Jan-2015
 */

#include <stdio.h>
int main(void)
{
    float pints;
    float cups;
    float oz;
    float tbsp;
    float tsp;

    printf("How many cups do you wish to convert to other units of measurement? ");
    scanf("%f", &cups);

    pints = cups / 2;
    oz = cups * 8;
    tbsp = oz * 2;
    tsp = tbsp * 3;

    printf("Pints: %.2f \n", pints);
    printf("Ounces: %.2f \n", oz);
    printf("Tablespoons: %.2f \n", tbsp);
    printf("Teaspoons: %.2f \n", tsp);
    return 0;
}

// A floating point value makes more sense, because the user might enter a decimal value,
// or if the user enters 1 cup, this value is 0.5 pints, which must be a decimal to display correctly.
