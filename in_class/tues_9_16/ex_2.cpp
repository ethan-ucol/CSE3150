#include <iostream>
#include <vector>
#include <string>

using std::cout, std::string, std::endl, std::vector;

template <class T>
T sum(vector<T>& vec){
	T ttl{};
	for (T x: vec){
	ttl += x;
	}
	return ttl;
}


int main(){
	vector<string> vec;
	vec.push_back(string("hello"));
	vec.push_back(string("world!"));
	for (string x: vec){
		cout << x << " ";
	}
	cout << endl;
	cout << sum(vec) << endl;
	return 0;
}

