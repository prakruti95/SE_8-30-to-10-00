#include<stdio.h>
#include<conio.h>
struct student
{
    int id;
    char name[10];
}st;
void main()
{
    printf("Enter id");
    scanf("%d",&st.id);
    
    printf("Enter name");
    scanf("%s",&st.name);
    
    
    
    printf("\n your id is %d and Your name is %s ",st.id,st.name);
    
    
    getch();
}