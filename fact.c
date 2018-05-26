#include <stdio.h>
 
int factorial(int);
 
int main()
{
    int num=5;
    int result;

    if (num < 0)
    {
        printf("Factorial of negative number not possible\n");
    }
    else
    {
        result = factorial(num);
        printf("The Factorial of %d is %d.\n", num, result);
    }
    return 0;
}
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return(num * factorial(num - 1));
    }
}
