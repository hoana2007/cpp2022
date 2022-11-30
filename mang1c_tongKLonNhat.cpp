#include <bits/stdc++.h>
#define nMax 100
using namespace std;

void nhapMang(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		a[i] = rand()%90 - 30;
	}
}	
void xuatMang(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<a[i]<<setw(5);
	}
	cout<<endl;
}	

void findSubArrayMax(int a[], int n) {
    int best = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++) 
	{
        sum = max(a[i], sum + a[i]);
        best = max(best, sum);
    }
    cout << "Lon nhat = "<<best << "\n";
}

void findSubArrayMaxWithIndices(int a[], int n) {
    int best = INT_MIN, sum = 0;
    int best_start = 0, best_end = 0, current_start = 0;
    for (int i = 0; i < n; i++) {
        if (sum + a[i] < a[i]) {
            current_start = i;
            sum = a[i];
        } else {
            sum += a[i];
        }
        if (best < sum) 
		{
            best = sum;
            best_start = current_start;
            best_end = i;
        }
    }
    cout << best << "\n";
    cout << "start from " << best_start << " to " << best_end << "\n";
}

int main() 
{
	srand((unsigned int)time(NULL));
	int n=0; 
	int a[nMax];
	cout<<"Nhap n = "; cin >> n;
	nhapMang(a,n);
	xuatMang(a,n);
    findSubArrayMax(a,n);
    findSubArrayMaxWithIndices(a,n);
}
