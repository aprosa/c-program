#include <stdio.h>
int main()
{
    double d1, d2, d3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &d1, &d2, &d3);

    if( d1>=d2 && d1>=d3 )
        printf("%.2f is the largest number.", d1);

    if( n2>=n1 && d2>=d3 )
        printf("%.2f is the largest number.", d2);

    if( n3>=n1 && d3>=d2 )
        printf("%.2f is the largest number.", d3);

    return 0;
}
