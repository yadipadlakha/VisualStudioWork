#include<iostream>
#include<string>
#include<map>
using namespace std;

void mapdemo(){
	map<int, string> m;
	m[0] = "zero";
	m.insert(make_pair(1, "one"));
	m[2] = "two";

	cout << "m.size() : " << m.size() << endl;
	cout << "is map empty : " << m.empty() << endl;

	map<int, string>::iterator it = m.find(1);
	cout << (*it).second << endl;

	map<int, string>::iterator it2 = m.upper_bound(0); //gives next iterator key in order , if none, then debug assert failure
	cout << (*it2).second << endl;
}