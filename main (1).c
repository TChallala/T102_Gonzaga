/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int rev;
    int spin;
    int sec;
    
    int results;
     printf("input rev:");
     scanf("%d", &rev );
    printf("input spins:");
    scanf("%d", &spin ); 
    printf("input sec:");
     scanf("%d", &sec );
results = rev * spin / sec;
 printf("%d multiplied by %d and then divided to %d results to %d",rev, spin, sec,results);
 printf("\nTherefore the spinning tire rotates %d degrees in one second.", results);
    return 0;
}
