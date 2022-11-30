#include<iostream>
#include<fstream>
using namespace std;
void count(int,int &);
void count(int n,int &d)
{
    for (int i=1;i<=n;i++)
    {
        for (int j=1,d1=0;j<=i;j++)
        {
            if (i%j==0)
            {
                d1++;
            }
            if (d1==3 && j==i)
            {
                d++;
            }
        }
    }
}
int main()
{
	fstream fi("sodacbiet_in.txt", ios::in);
	int n;
	fi>>n;
	int dem=0;
	count(n,dem);
	fi.close();
	
	fstream fo("sodacbiet_out.txt", ios::out);
	fo<<dem;
	fo.close();   
	return 0;
}
