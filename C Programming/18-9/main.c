#include<stdio.h>
#include<conio.h>

int fac(int n)
{
    if(n==0 || n==1)
    {
       return 1; 
    }
    else
    {
        return n * fac(n - 1);
    }
}

int main()
{
    int number = 5;
    printf("\n Factorial of given number is %d %d",number,fac(number));

    return 0;
}