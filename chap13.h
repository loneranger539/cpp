#include <iostream>
using namespace std;

class base {
public:
	int mem = 0;
public:
	base(){};
	base(int t) : mem(t) { cout << "direct " << endl; };
	//explicit base(base  &a)  { cout << "direct initialization" << endl; };
	base(const base &a) { cout << "copy initialzation "<<endl; };

	base& operator=(base &b) { cout << " overloaded = operator" << endl; return b;  }
	~base(){};
	void print() { cout << "mem is " << mem << endl; }
};


class derived {
public:
	int mem = 10;
public:
	derived() {};
	derived(int m) :mem(m) {};
	~derived() {};

};



class hasptr {
public :
	string *ps;
	int i;
public:
	hasptr(string &s = string()) :ps(new string(s)), i(0) {};
	hasptr(hasptr &p);
	~hasptr() {
		delete ps;
	};
	hasptr& operator=(hasptr &p);
};

