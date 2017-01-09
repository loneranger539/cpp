#include<cstdio>
#include<iostream>
#include<string>
#include<memory>

//using std::string;
using namespace std;



void func(string &s3) {
	s3 = "yy";
}
int main() {
	string a1("test");
	string a2 = "test2";

	a2 = a1;
	if (a1 == a2) {
		cout << "equal" << endl;

	}
	cout << "a2 is " << a2 << endl;

	a2 = "tt";
	func(a2);
	cout << "a2 is " << a2 << endl;
	string *p1 = new string("test");
	string *p2 = new string("test");
	if (p1 == p2) {
		cout << " p equal" << endl;

	}


	shared_ptr<string> s1 = make_shared<string>(a2);
	a2 = "55";
	cout << "s1 is " << *s1 << endl;
	cout << "s1 is " << s1.use_count() << endl;
	shared_ptr<string> s1 = make_shared<string>(a2);

	cout << "s1 is " << s1 << endl;

	//dont use ordinary pointers when creating shared pointer 
	//
	return 0;
}