#include<iostream>
#include<string>
using namespace std;

class animal
{
public:
	animal(string, string, string, string);
	virtual void speak1()
	{
		cout << "ÄãºÃ,ß÷¡¤ß÷" << endl;
	}
	virtual void speak2()
	{
		cout << "ÄãºÃ,Íô¡¤Íô" << endl;
	}
	void display();
	string color;
	string sex;
	string age;
	string name;
};
void animal::display()
{
	cout<< "color:  " <<color<<endl << "sex:   " << sex<<endl<< "age:   " << age<<endl<< "name:  " << name << endl;
}
animal::animal(string N, string n, string a, string y)
{
	color = N;
	sex = n;
	age = a;
	name = y;
}
class dog : public animal
{
public:
	dog (string N,string n,string a,string y):animal(N,n,a,y){}
	void display()
	{
		cout << "color:  " << color << endl << "sex:   " << sex << endl << "age:   " << age << endl << "name:  " << name << endl;
	}
	virtual void speak1()
	{
		cout << "ÄãºÃ,ß÷¡¤ß÷" << endl;
	}
};
class cat :public animal
{
public:
	void display()
	{
		cout << "color:  " << color << endl << "sex:   " << sex << endl << "age:   " << age << endl << "name:  " << name << endl;
	}
   cat(string N, string n, string a, string y) :animal(N, n, a, y) {}
   virtual void speak1()
   {
	   cout << "ÄãºÃ,ß÷¡¤ß÷" << endl;
   }
};
int main()
{
	animal puppy("white","yy","10","pp");
	puppy.display();
	puppy.speak1();
	animal kitty("blue","xy","12","uu");
	kitty.display();
	kitty. speak2();
	getchar();
	return 0;

}