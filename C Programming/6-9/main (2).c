#include <stdio.h>

int main()
{
    
    int num=5689,fdigit=0,ldigit=0;
    
    ldigit = num%10;//4
    
    while(num>0)//1234//123//12//1
    {
        if(num>9)
        {
            num=num/10;
        }
        else
        {
          fdigit = num;  
          num=num/10;
        }
       
    }
       int sum = fdigit+ldigit;
          printf("%d",sum);
  

    return 0;
}
