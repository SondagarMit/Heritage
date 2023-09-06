#include<iostream.h>
#include<conio.h>
#include<string.h>

class A {
public:
    int id;
    char name[50];
    char role[50];
    double salary;
    int experience;
    char comp_name[50];
    char address[100];
    char email[50];
    char contact[20];

public:
    void setId(int i)
    {
	id = i;
    }

    void setName(const char* n) {
	strcpy(name, n);
    }

    void setRole(const char* r) {
	strcpy(role, r);
    }

    int getId() const {
	return id;
    }

    const char* getName() const {
	return name;
    }

    const char* getRole() const {
	return role;
    }

};

class B
{
public:
    double salary;
    int experience;

public:
    void setSalary(double s) {
	salary = s;
    }

    void setExperience(int e) {
	experience = e;
    }

    double getSalary() const {
	return salary;
    }

    int getExperience() const {
	return experience;
    }
};

class C
{
public:
    char comp_name[50];
    char address[100];
    A a;

public:
    void setCompanyName(const char* c) {
	strcpy(comp_name, c);
    }

    void setAddress(const char* a) {
	strcpy(address, a);
    }

    A& getA() {
	return a;
    }

   
};

class D : public C,public B, public A
{
public:
    B b;

public:
    B& getB() {
	return b;
    }
};

void main() {
    clrscr();

    D d;
    A a;
    B b;
    C c;
    d.getA().setId(1);
    d.getA().setName("John");
    d.getA().setRole("Manager");
    d.getB().setSalary(50000.0);
    d.getB().setExperience(5);
    c.setCompanyName("ABC Corp");
    c.setAddress("123 Main St");
     d.getB().setSalary(55000.0);
    d.getB().setExperience(6);

    cout << "ID: " << d.getA().getId() << endl;
    cout << "Name: " << d.getA().getName() << endl;
    cout << "Role: " << d.getA().getRole() << endl;
    cout << "Salary: " << d.getB().getSalary() << endl;
    cout << "Experience: " << d.getB().getExperience() << " years" << endl;
    cout << "B Salary: " << d.getB().getSalary() << endl;
    cout << "B Experience: " << d.getB().getExperience() << " years" << endl;

    getch();
}