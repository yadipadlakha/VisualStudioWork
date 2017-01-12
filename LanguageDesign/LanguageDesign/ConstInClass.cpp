#include<iostream>
using namespace std;

class Base
{
public:
	void change() { cout << "inside change" << endl; }
	void foo() const { cout << "Base:foo" << endl; }
private:

};


void check_const_in_class(){
	const Base obj;
	obj.foo();
}