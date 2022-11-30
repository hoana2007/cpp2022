#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	//Xuat ra gia tri cua phan tu thu 75
	char ch1{97};
	cout<<ch1<<endl;
	
	char ch2{'a'};
	cout<<ch2<<endl;
	
	int n{75};
	cout<<static_cast<char>(n)<<endl;
	char ch{'K'};
	cout<<static_cast<int>(ch)<<endl;
	
	cout<<"Lop 10 \ntruong THPT Luong Son";
	return 0;
}
