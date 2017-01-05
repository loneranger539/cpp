#include<cstdio>
#include<iostream>
#include<string>
//using std::string;
using namespace std;

int main() {
	string s1("test");
	string s2("asndfasng'asdgnagnapdgadpfgapgopg");
	cout << "s1 is " << s1 << endl;
	cout << "s2 is " << s2 << endl;

	string s3(10, '3');
	string s4{ '1', '2', '3' };
	cout << "s4 is " << s4 << endl;
	//s4.copy(s2.c_str());

	char *str = "hello";
	string s5(str);
	char *str1 = "world";
	//s5.copy(str1,strlen(str1),0);
	//s5.copy(s4);
	cout << "s5 is "<<s5 << endl;

	string *p1;
	p1 = &s5;


	s1 = s2;

	cout << "s1 is " << s1 << endl;
	cout << "s2 is " << s2 << endl;

	s1[2] = 't';

	cout << "s1 is " << s1 << endl;
	cout << "s2 is " << s2 << endl;

	cout << "s1 is " << s1.size() << endl;
	cout << "s2 is " << s2.capacity() << endl;

	cout << "s2 is " << s2.c_str() << endl;

	return 0;
}