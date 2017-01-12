#include<iostream>
using namespace std;

class Functor{
public:
	Functor(){
		cout << "constructor called" << endl;
	}
	void operator()(){
		cout << "Functor called" << endl;
	}
};
void functordemo(){
	Functor obj = Functor(); //contructor call
	obj(); //Functor call
}