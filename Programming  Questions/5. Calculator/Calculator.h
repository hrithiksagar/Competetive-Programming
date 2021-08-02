#include <stdio.h>
int add(int a,int b)
{
    return(a+b);
}
int mul(int a,int b)
{
    return(a*b);
}
int sub(int a,int b)
{
    return(a-b);
}
int div(int a,int b)
{
    return(a/b);
}
int factorial(int a)
{
    long int fact(int a);
    printf("Factorial of %d = %d\n", a, fact(a));
    return 0;
}
long int fact(int a)
{
    if (a>= 1)
        return a*fact(a-1);
    else
        return 1;
    return 0;
}