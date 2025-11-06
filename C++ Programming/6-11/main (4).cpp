#include <iostream>
using namespace std;

class Calculation
{
    public:
    int cal(int a,int b)
    {
      return a+b;  
    }
    
    double cal(double c,double d)
    {
         return c*d;  
    }
};

int main()
{
    Calculation c1;
    
    cout<<c1.cal(6,3)<<endl;
    cout<<c1.cal(9.00,2.00)<<endl;
   

    return 0;
}