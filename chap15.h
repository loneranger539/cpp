#include <iostream>
using namespace std;

class base {
public:
	int parent;
	int common;
public:
	base(){};
	base(int b) :parent(b), common(0) {};
	virtual ~base() {};
	void print() {
		cout << "parent: " << parent << endl;
		cout << "common: " << common << endl;
	};
	virtual void update(int p) {
		cout << "update parent " << endl;
		common = p;
		parent = p;

	};
};


class derived : public base {
public:
	int child;
	int common;
public:
	derived(){};
	derived(int p, int c) :base(p), child(c), common(0) {};
	virtual void print() {
		cout << "child: " << child << endl;
		cout << "common: " << common << endl;
	};

	virtual void update(int p) {
		cout << "update child " << endl;
		common = p;
		child = p;

	};
};
