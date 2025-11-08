#include <iostream>
using namespace std;

struct Shape
{
    int width,height;
    
   Shape(int w,int h)
   {
       width = w;
       height = h;
   }
   
    void areaOfRectangle() 
    {       
        cout<<"Area of Rectangle is: "<<(width*height); 
    }      
   
};

int main()
{
    
    
    struct Shape s = Shape(4,4);
    s.areaOfRectangle();
    
  
  
  
    return 0;
}