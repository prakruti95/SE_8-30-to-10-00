#include <iostream>
using namespace std;

class Account
{
    public:
    
    int accno;
    string name;
    static float roi;
    
     Account(int accno, string name)   
    {    
            this->accno = accno;    
            this->name = name;    
    }   
    
    void display()
    {
         cout<<accno<<" "<<name<< " "<<roi<<endl;   
    }
    
    
};
float Account::roi=6.5;  

int main()
{
   
    Account a1 = Account(101,"Dharini");
    Account a2 = Account(102,"Manan");
    
    a1.display();
    a2.display();

    

    return 0;
}