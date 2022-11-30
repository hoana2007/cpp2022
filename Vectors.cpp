#include <iostream>
#include <vector>
using namespace std;
void view(vector <int> vec)
{
	for (vector <int>::iterator it = vec.begin(); it != vec.end(); it++)
		cout << *it <<" ";
	cout<<"\n"	;
}
int main(int argc, char** argv) {
	vector <int> v(10,2);
	view(v);
	cout << v.size();
	cout << v.front();
	return 0;
}
