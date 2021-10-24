//This program takes a number as input and tell if the number is even or odd

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0)
        printf("The number %d is even", n);
    else
        printf("The number %d is odd", n);
    return 0;
}

/*

    Enter a number: 5
    The number 5 is odd
    
*/
