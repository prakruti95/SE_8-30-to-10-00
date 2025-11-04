#include<iostream>
using namespace std;

class A
{
    protected:
    void get_a()
    {
       cout<<"A called"; 
    }
};
class B :public A
{
     protected:
    void get_b()
    {
       cout<<"B called"; 
    }
};
class C : public B
{
    public:
    void display()
    {
        C c1;
        c1.get_a();
        c1.get_b();
    }
};

int main()
{
    C c1;
    c1.display();
    return 0;
}