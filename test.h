#include <iostream>
#include <string>
using namespace std;
class test {
public:
	int no;
	string book;
public:
	test() { cout << "default const" << endl; };
	~test() { /*cout << "destructor " <<no  << endl;*/  };
	test(int a,string str) :no(a), book(str) { cout << "overridden constructor"<<endl;};
	test(test &t) :no(t.no), book(t.book) { cout << "copy constryctor" << endl; }

	void dump() {
		cout << "no "<< no <<"str "<< book<<endl;};
	void dump1() const {
		//dump();
		//no = 3;
	}
	test& operator=(test &t) { cout << "overloaded =" << endl;  no = t.no, book = t.book; return *this; };
};



class test1 {
	int no;
	string str;
public:
	test1() = default;
	test1(int i, string str) :no(i), str(str) {};
	test1(test1 &t) = default;
	test1& operator=(test1 &t) = delete;
	void dump() { cout << "test 1" << no << str << endl; }
	~test1() = default;
};




class book {
public:
	int price;
	int discount;
	book() = default;
	book(int price,int discount=1) : price(price) ,discount(discount) {};
	virtual int net_price() { cout << "quote price " << endl; return price*discount; };
	void print() { cout << "base print cost " << book::net_price()<<  endl; };
	string getbook() { return bookno; };
	void override() { cout << "base class func" << endl; };
	void printprot() { cout << "prot is " << prot << endl; }
private:
	string bookno = "base";
protected:
	int prot = 20;


};

class discountbook : public book {
public:
	discountbook() = default;
	discountbook(int p, int d = 3.6) :book(p,d) {price = p; discount = 6; }
	//int net_price() { return price - discount; };
	int net_price() { cout << "discountquote price " << endl; return price*discount; };
	//int net_price() { return 0; };
	//string getbook() { return bookno; };
	void override() { cout << "derived class func" << endl; };
	int ts;
	int discprot;
public:
	void printprot() { prot = 30; cout << "prot is " << prot << endl; }

};

class promotion : private discountbook {
public:
	int tt;
	promotion(int p, int d = 3.6) :discountbook(p, d),tt(44) { }
	void printprot() { prot = 30; cout << "prot is " << prot << endl; }
};

void printbook(book &t) {
	//cout << "test is " << t.ts << endl;
	t.net_price();
	t.print();
}

void printbook1(book t) {
	t.print();
}