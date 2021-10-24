//This program takes 3 sides of a triangle and tells if the triangle is equilateral, isosceles or scalene

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Input first side: ");
    scanf("%d",&a);
    printf("Input Second side: ");
    scanf("%d",&b);
    printf("Input third side: ");
    scanf("%d",&c);

    if(a==b && b==c)
        printf("Triangle is an equilateral triangle");
    if(a!=b && b!=c && c!=a)
        printf("Triangle is an scalene triangle");
    if(a==b && b!=c)
        printf("Triangle is an isosceles triangle");
    if(a==b && b!=c)
        printf("Triangle is an isosceles triangle");
    if(a==c && c!=b)
        printf("Triangle is an isosceles triangle");
    if(c==b && c!=a)
        printf("Triangle is an isosceles triangle");


    return 0;
}

/*

    Input First side: 6
    Input second side: 6
    Input third side: 6
    Triangle is an equilateral triangle

*/
