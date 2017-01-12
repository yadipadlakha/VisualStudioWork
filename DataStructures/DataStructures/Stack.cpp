#include<iostream>
using namespace std;

class MyStack
{
public:
	MyStack();
	~MyStack();
	int pop();
	void push();
private:
	int size;

};

MyStack::MyStack()
{
}

MyStack::~MyStack()
{
}