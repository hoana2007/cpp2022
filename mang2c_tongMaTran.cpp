#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
   	int i, j, matrix[100][100];
   	int row1, col1, row2, col2, sum = 0;;
	cout << "CONG hai ma tran trongC++: \n";
   	cout << "Nhap so hang cua matrix: ";
   	cin >> row1;
   	cout<<endl;
   	cout << "Nhap so cot cua matrix: ";
   	cin >> col1;
	cout<<endl;

    //Nhap cac phan tu cua ma tran 
   cout<<"\nNhap ma tran\n";
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
            cout<<"matrix["<<i<<"]["<<"["<<j<<"] = ";
            cin >> matrix[i][j];
      }
   }
    //Ma tran da nhap
   cout<<"\nNhap ma tran\n";
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
            cout<<matrix[i][j]<<"     ";
      }
   }

    //Tong ma tran
   for (i = 0; i < row1; i++)
      for (j = 0; j < col1; j++) {
         sum = sum + matrix[i][j];
      }
    //Hien thi ma tran ket qua
	//Hien thi ket qua
   	cout<<endl;
	cout << "Tong tat ca cac phan tu cua ma tran la: " << sum;

    return 0;
}

