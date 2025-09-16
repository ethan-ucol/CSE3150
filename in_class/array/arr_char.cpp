#include <iostream>

using std::cout, std::endl;

int main(){
	int x = 10; 
	int* px = &x;
	*px = 20;
	cout << "x= " << x << endl;
	cout << "*px = " << *px << endl;
}
