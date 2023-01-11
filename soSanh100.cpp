#include <iostream>
using namespace std;
int main(){
	int N;
	//Nhap du lieu vao tu ban phim
	cout<<"Nhap gia tri cho N: ";
	cin>>N;
	if (N > 100){
		cout<<"So "<<N<<" lon hon 100";
	}
	else if (N < 100){
		cout<<"So "<<N<<" nho hon 100";
	}
	else{
		cout<<"So "<<N<<" bang hon 100";
	}
		
	return 0;
}