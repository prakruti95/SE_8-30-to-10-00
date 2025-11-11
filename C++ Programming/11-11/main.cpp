#include <iostream>
using namespace std;

class A
{
    friend class B;
    
    private:
    int a=0;
    
    
    public:
    void printMember() 
	{ 
		cout<<a<< endl; 
	}
};

class B
{
    public:
	void change(A&yourclass, int x )
	 { 
		yourclass.a = x;
	 } 
};

int main()
{
   	A a;
	B b;
	a.printMember();
	b.change(a,5);
	a.printMember(); 

    return 0;
}