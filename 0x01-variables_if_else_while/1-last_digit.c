#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main-prints the last digit of a randomly generated number
 * and whether it is greater than 5, less yhan 6, or 0.
 *
 * return:always 0.
 */
int n;
srand(time(0));
n = rand()-RAND_MAX/2;
/*your code goes there*/
if ((n%10)>5)
{
printf("last digit of %d is %d and is less than 6 and not 0\n"
n,n%10);
}
else
{
return (0)
}	
