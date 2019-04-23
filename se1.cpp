#include <iostream>
#include <string>
using namespace std;

class Person{
	protected:
		string _name;
		int _age;

	public:
		// 생성자와 멤버함수 미리 선언해 놓아야함
		Person();
		Person(string name, int age);
		virtual void PrintPersonalInformation();
};

class CrazyPerson: public Person{
	private:
		string _desease;
		int _intensity;
	public:
		CrazyPerson();
		void PrintPersonalInformation();
};

// Constructor
Person::Person(){
	_name = "blank";
	_age = 0;
}

// Constructor Overloading
Person::Person(string name, int age){
	_name = name;
	_age = age;
}

CrazyPerson::CrazyPerson(){
	_name = "crazy man";
	_age = 0;
	_intensity = 10;
	_desease = "조현병";
}

void Person::PrintPersonalInformation(){
	cout << "Name is " << _name << "\n";
	cout << "Age is " << _age << "\n";
}

void CrazyPerson::PrintPersonalInformation(){
	cout << "Name..... is " << _name << "\n";
	cout << "Age is " << _age << "\n";
	cout << "Crazy Intensity is " << _intensity << "\n";
	cout << "Disease name is " << _desease << "\n";
}

/*
int main(){
	Person p1("don", 25);
	CrazyPerson cp;
	Person *p2 = &cp;
	p1.PrintPersonalInformation();
	p2 -> PrintPersonalInformation();
}
*/
