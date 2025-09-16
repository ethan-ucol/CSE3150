#include <iostream>

using std::cout, std::endl;

int main(){
	int w = 0;
	char s[] = "Hello";
	char * p = s;
	*p = 'T';
	cout << "s= " << s << endl;
	return 0;
}
