#include <iostream>
using namespace std;

struct Shape
{
    
    int a,b,c,choice;
};

int main()
{
    
    
    struct Shape s;
    
    cout<<"Enter Your Choice \n 1 for rectangle \n 2 for circle \n 3 for square";
    cin>>s.choice;
    
    cout<<"Enter Value for a";
    cin>>s.a;
    
    cout<<"Enter Value for b";
    cin>>s.b;
    
    cout<<"Enter Value for c";
    cin>>s.c;
    
    if(s.choice==1)
    {
         int ans = s.a*s.b;
         cout<<ans;
    }
    
    else if(s.choice==2)
    {
         int ans = 0.5*s.a*s.b;
         cout<<ans;
    }
    
    else if(s.choice==3)
    {
         float ans = 3.14*s.a*s.b;
         cout<<ans;
    }
    
  
  
    return 0;
}