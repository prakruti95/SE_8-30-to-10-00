#include <iostream>
using namespace std;

float division(int x, int y) 
{  
   if( y == 0 ) 
   {  
      throw "Attempted to divide by zero!";  
   }  
   return (x/y);  
} 

int main()
{
    try
    {
        cout<<division(25,5);    
    }
    catch(const char* e)
    {
        cerr<<e<<endl;
    }
    

    return 0;
}