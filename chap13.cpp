#include "chap13.h"


void func1(base b);
base func2();
base& func3();

void func1(base b) {
	cout << "inside func1" << endl;
}

base func2() {
	cout << "inside func2" << endl;
	base b1(20);
	return (b1);
}

base& func3() {
	cout << "inside func3" << endl;
	base b1(20);
	return (b1);
}

hasptr::hasptr(hasptr &p) {
	ps = new string(*(p.ps));
	i = p.i;
}

hasptr& hasptr::operator=(hasptr &p) {
	string *temp = new string(*(p.ps));
	delete ps;
	ps = temp;
	return *this;


}
int main() {

	base b1;
	base b2(10);
	base b3(b2);

	base b4 = 10;
	b3.print();
	b4 = b2;



	cout << "funn1" << endl;
	func1(b1);

	cout << "funn2" << endl;
	func2();

	cout << "funn3" << endl;
	base b6;
	b6 = func3();

	derived d1;
	//base b7 = d1;
	return 0;
}