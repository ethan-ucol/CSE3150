#include <iostream>
#include <stack>

using std::cout, std::stack, std::endl;

int main(){
	stack<double> si;			// Before we had both si and i as a int we can change these two what ever user defined type we want int, double, etc.)
	for(double i = 0; i < 5; ++i){
		si.push(i);
	}
	while(!si.empty()){
		cout << "Stackval-" << si.top() << endl;
		si.pop();
	}
	return 0;
}
