#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	for (int i=0; i <10; i++)
	{
		for (int j=1; j<10; j++)
		{
			cout<<left<<setw(2)<<" "<< j << " * "<<i<<" = ";
			if(i*j < 10)
			{
				cout<<i*j<<"  ";
			}
			else if (i*j < 100)
			{
				cout<<i*j<<" ";
			}
		}
		cout<<endl;
	}

	return 0;
}
