#include <iostream>
#include <vector>


using std::cout, std::endl, std::vector;

int main(){
	vector<int> vec;
	for(int i =0; i < 5; ++i){
		vec.push_back(i);
	}
	for(
		// Like int i = 0
		vector<int>::iterator it = vec.begin();
		// Like i < 5
		it != vec.end();
		// Like ++i
		it++
	){
		cout << *it << endl;
	}
	vector<int>::iterator on3 = vec.begin() + 2;
	cout << "rank3=" << *on3 << endl;
	*on3 = 17;
	cout << "rank3=" << *on3 << endl;
	return 0;
}
	
