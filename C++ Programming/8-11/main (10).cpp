#include <iostream>
using namespace std;

struct Shape
{
    
    int width,height;
};

int main()
{
    struct Shape s;
    
    s.width=50;
    s.height=60;
    
    cout<<"Value is "<<s.width*s.height<<endl;
    
  
    return 0;
}