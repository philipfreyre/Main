/* Author: Philip Freyre
 * 5-Feb-15
 * This program is #6 from page 141
 */
#include <stdio.h>
#include <string.h>      // for strlen() prototype
#define DENSITY 62.4     // human density in lbs per cu ft
int main()
{
    //define variables for fname, fsize, lname, and lsize
    char fname[40];
    int fsize;
    char lname[40];
    int lsize;

    //Ask user for input
    printf("What is your first name?\n");
    scanf("%s", fname);
    printf("What is your last name?\n", lname);
    scanf("%s", lname);

    //First print of fname and lname and their size
    printf("%s %s\n", fname, lname);
    fsize = strlen(fname);
    lsize = strlen(lname);
    printf("%d %d\n", lsize, lsize);

    //Second Print of fname and lname and their size
    printf("%s %s\n", fname, lname);
    fsize = strlen(fname);
    lsize = strlen(lname);
    printf("%*d %*d", fsize, fsize, lsize, lsize);
    return 0;
}
