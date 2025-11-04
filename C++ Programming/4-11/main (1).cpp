#include<iostream>
using namespace std;

class A
{
    protected:
    int a1;
    
    public:
    void get_a(int n)
    {
        a1 = n;
    }
};

class B 
{
    protected:
    int b1;
    
    public:
    void get_b(int n)
    {
        b1 = n;
    }
};

class C : public A, public B
{
    public:
    void display()
    {
        cout << "The value of a is : " <<a1<<endl;  
        cout << "The value of b is : " <<b1<<endl;  
        cout << "Addition of two value is : "<<a1+b1<<endl;
    }
};


int main()
{
    int a2,b2;
    
    cout<<"Enter value for a:";
    cin>>a2;
    
    cout<<"Enter value for b:";
    cin>>b2;
    
    
    
    C c1;
    c1.get_a(a2);
    c1.get_b(b2);
    c1.display();
    // c1.get_a(10);
    // c1.get_b(20);
    
    
    return 0;
}