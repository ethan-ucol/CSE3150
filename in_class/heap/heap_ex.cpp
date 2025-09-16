#include <iostream>

using std::cout, std::endl;

int main(){
	int* px = new int;
	*px = 20;
       	cout << "*px = " << *px << endl;				       
       	cout << "px = " << px << endl;
	delete px;
}
