#include "test.h"
#include <vector>
int x;
//int x = 1;

void main() {

	test *t1 = new test(4,"");
	test t2(2, "gg");
	test t3(t2);
	t3.dump();
	 test t4;
	t4 = t3;
	t4.dump();
	test t5 = t4;
	t5.no = 5;
	t4.no = 4;
	t3.no = 3;
	t2.no = 2;
	t1->no = 1;
	//const test t6 = t5;
	//vector<test > v;
	//v.push_back(t6);
	//v.push_back(t6);
	delete t1;


	test1 r1;
	test1 r2(2, "ttt");
	r1.dump();
	r2.dump();
	//r1 = r2;
	r1.dump();

	discountbook d2(4);
	book d1(3);
	//d1.net_price();
	printbook(d1);
	printbook(d2);
	d1.printprot();
	d2.printprot();
	//cout << "prot in main " << d1.prot << endl;
	//cout << "bookno " << d1.getbook() << endl;
	//cout << "bookno " << d2.getbook() << endl;
	promotion d6(8);
	d6.printprot();
	d2.discprot = 3;
	///d6.discprot = 4;
	//printbook(d6);
	//derived-to-base conversion
	//book *d3 = new book();
	//discountbook *d4 = new discountbook();
	//book *d5 = NULL;
	//d5 = d4;
	//d5->override();
	//return 0;
	cout << "result " << 10 / 10 << endl;
	cout << "result " << 10 % 10 << endl;
	cout << "result " <<'1' << endl;
	//har a[5] = "geeks";
	int ttt = 10;
	cout << "result " << &&ttt << endl;
}