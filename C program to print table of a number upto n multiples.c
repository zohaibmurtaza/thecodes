//This is a C language program that can take a number to find table of it and also takes a number upto which you have to print table.
//If user gives x and n and it will print upto x * 1 = x  to  x * n = x*n.

#include <stdio.h>
int main()
{
    int x, n, c;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Up to: ");
    scanf("%d", &n);
    for(c=1;c<=n;c++){
        printf("%d X %d = %d\n", x, c, x*c);
    }
    return 0;
}

/*Output:
    
    Enter a number: 5
    Up to: 10
    5 X 1 = 5
    5 X 2 = 10
    5 X 3 = 15
    5 X 4 = 20
    5 X 5 = 25
    5 X 6 = 30
    5 X 7 = 35
    5 X 8 = 40
    5 X 9 = 45
    5 X 10 = 50

*/
