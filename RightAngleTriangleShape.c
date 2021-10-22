#include <stdio.h>
#include <stdlib.h>
/* Program to print a shape like a right angle triangle using "*" symbol */
int main()
{
    int r,c,i; /*r is for number of rows, c is to control the inner loop iterations, i is to control the iteration of upper loop*/
    printf("Enter number of rows: "); /*prompt*/
    scanf("%d",&r);
    for(i=1;i<=r;i++)
        {
            for(c=1;c<=i;c++)
                {
                    printf("*");
                }
            printf("\n");
        }
    return 0;
}
