#include<iostream>
#include<vector>
using namespace std;

void vectordemo(){
	vector<char> v;
	
	for (char c = 'a'; c <= 'h'; c++){
		v.push_back(c);
	}
	v[9] = 'p';
	vector<char>::iterator it = v.begin();
	for (; it < v.end(); it++){
		cout << *it<<endl;
	}
	cout << "vector size : " << v.size() << endl;
	cout << "vector capacity : " << v.capacity() << endl;
	cout << "vector reserves 12  " << endl;
	v.reserve(12);
	cout << "vector capacity : " << v.capacity() << endl;
	cout << "vector max_size : " << v.max_size() << endl;

	v.front();
}