#include <iostream.h>
#include <conio.h>

class Animal
{
	protected:
		int age;
	public:
		void set_value(int a)
		{
		   age = a;
		}
};

class Zebra :public Animal
{
	public:
		 void print()
	{
		 cout << "Zebra - Age: " << age << " years\n";
		 cout << "Place of Origin: Africa" << "\n";
	}
};

class Dolphin :public Animal
{
public:
    void dolphindata()
    {
	cout << "Dolphin - Age: " << age << " years \n";
	cout << "Place of Origin: Oceans"<< "\n";
    }
};

void main()
{
    Zebra zebra;
    Dolphin dolphin;

    int zebraAge, dolphinAge;

    clrscr();

    cout << "Enter Zebra's age: \n";
    cin >> zebraAge;
    zebra.set_value(zebraAge);

    cout << "Enter Dolphin's age: \n";
    cin >> dolphinAge;
    dolphin.set_value(dolphinAge);

    cout << endl;

    zebra.print();
    dolphin.dolphindata();

    getch();
}