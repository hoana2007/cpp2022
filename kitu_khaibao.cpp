#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
	//Khai bao bien ki tu:
	char ch1{ 'K' };// Khoi tao bien character voi ki tu 'K' (mã ASCII 75)
	char ch2{ 75 };	// Khoi tao bien character voi mã ASCII 75 (ký tu 'K')
	char ch3(75);	// Khoi tao bien character voi mã ASCII 75 (ký tu 'K')
	char ch4 = 'K';	// Khoi tao bien character voi ký tu 'K' (mã ASCII 75)
	char ch5;	// khai báo bien kieu character
		ch5 = 75;	// gán mã ASCII 75 (ký tu 'K') cho bien character
	cout<<"Ki tu 1: "<<ch1<<endl;
	cout<<"Ki tu 2: "<<ch2<<endl;
	cout<<"Ki tu 3: "<<ch3<<endl;
	cout<<"Ki tu 4: "<<ch4<<endl;
	cout<<"Ki tu 5: "<<ch5<<endl;
	
//	//In ki tu su dung ep kieu
//	cout<<static_cast<char>(ch2)<<endl;
//	//In ma ASCII
//	cout<<static_cast<int>(ch1)<<endl;
	
	//Su dung ki tu dac biet
	//cout<<"\a";
	//cout<<"Lop 10\ntruong THPT Luong Son";
	
	char hoten[] = {'N','g','u','y','e','n','\0'};
	for(int i=0; i<5; i++)
	{
		cout<<"sao the nhi: "<<hoten[i];
	}

	char szKteam[] = "Kteam";
	cout << szKteam << endl; // "Kteam"
	
return 0;
}
