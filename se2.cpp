#include <iostream>
using namespace std;

// Abstraction : Class
// Message-Passing : Encapsulation
/*
	Binding, Data hiding : see protected(Access Modifier) keyword
*/
class Namza{
	protected:
		int _deadlift;
		int _squat;
		int _benchpress;
	public:
		Namza();
		Namza(int dl,int sq,int bp);
		virtual void isNamza();
};

// Generalization, Specialization : Inheritance
class Newbie: public Namza{
	protected:
		int _trained_year;
	public:
		// Constructors aren't inherited
		Newbie();
		Newbie(int dl,int sq,int bp,int year);
		void isNamza();
};

Namza::Namza(){
	_deadlift = 50;
	_squat = 50;
	_benchpress = 30;
}

// Polymorphism : Overloading
Namza::Namza(int dl, int sq, int bp){
	_deadlift = dl;
	_squat = sq;
	_benchpress = bp;
}

Newbie::Newbie(){
	_deadlift = 50;
	_squat = 50;
	_benchpress = 30;
	_trained_year = 0;
}

// Polymorphism : Overriding
Newbie::Newbie(int dl, int sq, int bp, int year){
	_deadlift = dl;
	_squat = sq;
	_benchpress = bp;
	_trained_year = year;
}

void Namza::isNamza(){
	if((_deadlift + _squat + _benchpress) >= 500){
		cout << "REALMAN, GET UNDERARMOUR" << endl;
	}else{
		cout << "SHUT UP AND SQUAT" << endl;
	}
}

void Newbie::isNamza(){
	cout << "SHUT UP NEWBIE" << endl;
}


int main(){
	// 부모 클래스 포인터로 선언했으나 isNamza는 뉴비로! (가상함수)
	Namza * np = new Newbie();
	np -> isNamza();
	Namza rm(205, 160, 135);
	rm.isNamza();
}
