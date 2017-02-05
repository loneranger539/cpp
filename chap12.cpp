#include<cstdio>
#include<iostream>
#include<string>
#include<memory>

//using std::string;
using namespace std;



void func(string &s3) {
	s3 = "yy";
}



shared_ptr<string> func1(shared_ptr<string> a1) {
	cout << "a1 count " << a1.use_count() << endl;
	return a1;

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
//	shared_ptr<string> s1 = make_shared<string>(a2);

	cout << "s1 is " << s1 << endl;

	//dont use ordinary pointers when creating shared pointer 
	//



	shared_ptr<string> t1 = make_shared<string>("tt");
	if (t1) {
		cout << "no free" << endl;


	}
	else
		cout << "free" << endl;

	cout << "t1 count " << t1.use_count() << endl;
	shared_ptr<string> t2,t3,t4;
	t2 = t1;
	cout << "t2 count " << t2.use_count() << endl;
	cout << "t1 count " << t1.use_count() << endl;
	t3 = t2;
	cout << "t3 count " << t3.use_count() << endl;
	cout << "t2 count " << t2.use_count() << endl;
	cout << "t1 count " << t1.use_count() << endl;
	t3 = t4;
	t2 = t3;
	//t4(t1);
	cout << "t4 count " << t4.use_count() << endl;
	cout << "t3 count " << t3.use_count() << endl;
	cout << "t2 count " << t2.use_count() << endl;
	cout << "t1 count " << t1.use_count() << endl;
	shared_ptr<string> t5(t1);
	cout << endl;
	cout << "t5 count " << t5.use_count() << endl;
	cout << "t4 count " << t4.use_count() << endl;
	cout << "t3 count " << t3.use_count() << endl;
	cout << "t2 count " << t2.use_count() << endl;
	cout << "t1 count " << t1.use_count() << endl;
	t4=func1(t5);
	cout << endl;
	cout << "t5 count " << t5.use_count() << endl;
	cout << "t4 count " << t4.use_count() << endl;
	cout << "t3 count " << t3.use_count() << endl;
	cout << "t2 count " << t2.use_count() << endl;
	cout << "t1 count " << t1.use_count() << endl;




	//int *i1 = new int;
	//cout << "i1 is " << i1 << endl;
	//cout << "i1 is " << *i1 << endl;
	//*i1 = 1;
	//cout << "i1 is " << i1 << endl;
	//cout << "i1 is " << *i1 << endl;

	shared_ptr<string> t6 = t5;
	cout << endl;
	cout << "t5 count " << t5.use_count() << endl;
	cout << "t4 count " << t4.use_count() << endl;
	cout << "t3 count " << t3.use_count() << endl;
	cout << "t2 count " << t2.use_count() << endl;
	cout << "t1 count " << t1.use_count() << endl;
















	return 0;
}