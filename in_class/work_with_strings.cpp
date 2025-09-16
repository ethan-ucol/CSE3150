#include <iostream>
#include <string>

using std::cin, std::cout, std::endl, std::string;

void printGreeting(string fullname){
	cout << "Length of the name " << fullname.size() <<endl;

	size_t space_pos = fullname.find(' ');
	if (space_pos == string::npos){
		cout << "Please reenter first and last name" << endl;
		return;
	}

	string first = fullname.substr(0, space_pos);
	string last = fullname.substr(space_pos + 1);
	cout << last << ", " << first << endl;

	string greeting = "Hello " + fullname + "!";
	cout << greeting <<endl;
}

int main(){
	cout << "Enter your full name (first and last): ";
	string fullname;
	std::getline(cin, fullname);
	printGreeting(fullname);
}
