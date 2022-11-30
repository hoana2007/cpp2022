#include <iostream>
#include <conio.h>
using namespace std;

#define max 100
//nhap day
void NhapDay(int a[],int n) 
{
  for(int i=0; i<n; i++) 
  	{
	 cout<<"\n a["<<i<<"] =";
	 cin>>a[i];
    }
}
//xuat day
void XuatDay(int a[],int n) 
{
  cout<<"\n IN DAY: ";
  for(int i=0; i<n; i++)
	 cout<<a[i]<<"\t";
}
// tim kiem tuan tu
int timtuantu(int x, int a[],int  n)
{
  int i =0;
  while (i <n &&a[i]!=x)
    i = i+1;
  return (i);//neu giá tri tra ve là i<=n-1 (tìm thay), i=n (không tìm thay)
}
//chuong trinh chinh
int main() 
{
  int a[max],n;
  cout<<"Nhap so phan tu:";
  cin>>n;
  NhapDay(a,n);
  cout<<"\n Day vua nhap la:";
  XuatDay(a,n);
  cout<<endl;
  int x;
  cout<<"\n Nhap phan tu can tim:";
  cin>>x;
  if (timtuantu(x, a,n)<=n-1) cout<<"\n TIM THAY X"<<n;
  else cout<<"\n KHONG TIM THAY X";
  getch();
}
