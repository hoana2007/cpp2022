#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
   	int i, j, matrix1[100][100], matrix2[100][100], matrix3[100][100];
   	int row1, col1, row2, col2;
	cout << "Tru hai ma tran trongC++: \n";
   	cout << "Nhap so hang cua matrix1: ";
   	cin >> row1;
   	cout<<endl;
   	cout << "Nhap so cot cua matrix1: ";
   	cin >> col1;
	cout<<endl;
   	cout << "Nhap so hang cua matrix2: ";
   	cin >> row2;
   	cout << "Nhap so cot cua matrix2: ";
   	cin >> col2;
    /*
   * Truoc khi nhap cac phan tu, kiem tra xem so hang va so cot
   * cua hai ma tran co bang nhau khong 
   */
   if (row1 != row2 || col1 != col2) {
      cout << "\nHai ma tran khong cung kich co!";
      exit(0);
   }
    //Nhap cac phan tu cua ma tran 1
   cout<<"\nNhap ma tran 1\n";
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
            cout<<"matrix1["<<i<<"]["<<"["<<j<<"] = ";
            cin >> matrix1[i][j];
      }
   }
    //Nhap cac phan tu cua ma tran 2
   printf("\nNhap ma tran 2\n");
   for (i = 0; i < row2; i++)
      for (j = 0; j < col2; j++) {
            cout<<"matrix2["<<i<<"]["<<"["<<j<<"] = ";
            cin >> matrix2[i][j];
      }
    //Tru hai ma tran
   for (i = 0; i < row1; i++)
      for (j = 0; j < col1; j++) {
         matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
      }
    //Hien thi ma tran ket qua
   	cout<<"\nKet qua cua phep tru hai ma tran la: \n";
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
         cout<<"\t"<< matrix3[i][j];
      }
      cout<<"\n";
   }
    return 0;
}

