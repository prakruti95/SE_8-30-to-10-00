#include<iostream>
using namespace std;

class student
{
  
    public:
    int id;
    string name;
    string surname;
    student(int i,string n,string s)
    {
      id = i;
      name = n;
      surname = s;
    }
    
    void display()
    {
        cout<<id<<endl;
        cout<<name<<endl;
         cout<<surname<<endl;
    }
 
};
int main()
{
    student s1 = student(101,"kishan","a");
    student s2 = student(102,"kartik","a");
    student s3 = student(103,"dharini","a");
    student s4 = student(104,"raj","a");
    student s5 = student(105,"vijay","a");
    
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
  
    return 0;
}