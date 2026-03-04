#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    //Get two numbers from user
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);

    //Check the sign of the product
    if((a>0 && b>0)||(a<0 && b<0))
    {
        printf("The product is positive");
    }
    else if((a>0 && b<0) || (a<0 && b>0))
    {
        printf("The product is negative");
    }
    else
    {
        printf("The product is zero");
    }
    return 0;
}
