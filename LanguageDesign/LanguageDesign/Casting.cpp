#include<iostream>
using namespace std;

void casting(){
	const int x = 33;
	int *ptr = const_cast<int*>(&x);
	cout << *ptr<<endl;
	*ptr = 22;
	// ptr = &x ; explicit assignation of address of a constant integer into a pointer to a modifiable integer :: NOT ALLOWED 
	// a temporary is created in case od CONST_CAST but can't modify original variable, so undefined behavior
	cout << "ptr = " << ptr << endl;
	cout << "&x    = " << &x << endl;
}