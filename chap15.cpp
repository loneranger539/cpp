#include "chap15.h"

int main() {

	base b1(10);
	b1.print();
	derived d1(4,20);
	d1.print();
	//d1.update(3);
	//d1.print();

	cout << "reference test " << endl;
	base &b2 = d1;
	b2.print();
	return 0;
}