#include <bits/stdc++.h>

using namespace std;

void Swap(int *x, int *y)
{ int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}

int main()
{
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    int a[n];
    srand(time(0));
    //nhập các phần tử mảng
    for(int i=0; i<n; i++){
         //cout << "Nhap vao phan tu a[" << i << "]: ";
         a[i] = rand() % 100;
         cout<<a[i] <<setw(5);
    }
    cout<<endl;
   
    //sắp xếp mảng
    for(int i = 0; i < n; i++){
        int min=i,j;
        for(int j = i+1; j <= n; j++){
            if(a[j]<a[min]) min=j; //tìm vị trí phần tử nhỏ nhất
        }
        Swap(&a[i],&a[min]); // hoán đổi a[min] với a[i]
    }
    //khoi tao mang 2 chieu de sap xep tan suat va gia tri
    int mode[n][2];
    for(int i=0;i<2;i++)
    	for(int j=0;j<10;j++) 
			mode[j][i]=0;
     mode[0][0]=1;
 
    //tim tan suat
    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++)
    		if(a[i]==a[j+1]) 
			{
				++mode[i][0];
				mode[i][1]=a[i];
			}
   
    //tim so lan suat hien nhieu nhat
    int max;
    int k=0;
    max=mode[0][0];
    for(int j=0;j<10;j++)
    	if(max<mode[j][0])
		{
			max=mode[j][0];
			k=j;
		}
   
    //in ket qua
    cout<<"Gia tri xuat hien nhieu nhat la:"<<mode[k][1]<<"\n";
    cout<<"Xuat hien "<<max<<" lan.";
}