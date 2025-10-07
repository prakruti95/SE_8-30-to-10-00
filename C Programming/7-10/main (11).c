#include<stdio.h>
#include<conio.h>

void swap(int *x, int *y)
{
    
    printf("\n Before Swapping value of a inside function %d",*x);
    printf("\n Before Swapping value of b inside function %d",*y);
    
    int temp;

   temp = *x; 
   *x = *y;    
   *y = temp; 
   
    
    printf("\n After Swapping value of a inside function  %d",*x);
    printf("\n After Swapping value of b inside function  %d",*y);
    
   
   
}

void main()
{
   
    int a = 100;
    int b = 200;
    
    printf("\n Before Swapping value of a %d",a);
    printf("\n Before Swapping value of b %d",b);
    
    swap(&a,&b);
    
    printf("\n After Swapping value of a %d",a);
    printf("\n After Swapping value of b %d",b);
    
    
   
   
    
    getch();
}
