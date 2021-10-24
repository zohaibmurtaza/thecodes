//This is a C language program that can take a number to find table of it and also takes a number upto which you have to print table.
If user gives x and n and it will print upto x * n = z

#include <stdio.h>
int main()
{
    int n, c;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Upto: ");
    scanf("%d", &n);
    for(c=1;c<=x;c++){
        printf("%d X %d = %d\n", x, c, x*c);
    }
    return 0;
}

Output
