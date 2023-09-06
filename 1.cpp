#include<iostream.h>
#include<conio.h>

class Mother 
{
public:
    void display() 
    {
        cout << "Mother's display method";
    }
};

class Daughter : public Mother 
{
public:
    void display() 
    {
        cout << "Daughter's display method";
    }
};

void main() 
{
    Daughter d;
    clrscr();
    
    d.display();  // Calls the display method of the Daughter class
    
    getch();
}
