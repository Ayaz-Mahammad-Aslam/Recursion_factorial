/*write a program to print factorial of given number using recursion*/
#include<stdio.h>
long factorial(int n)
{
    if(n==0)
    return 1;
    else
    return(n*factorial(n-1));
}
void main()
{
    int number;
    long fact;
    printf("Enter a number: \n");
    scanf("%d",&number);
    fact = factorial(number);
    printf("Factorial of %d is %ld",number,fact);
}