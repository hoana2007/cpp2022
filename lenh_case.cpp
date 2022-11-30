#include <iostream> 
 using namespace std; 
 int main () 
 { 
     // Khai bao bien cuc bo: 
     //char hocluc = 'B'; 
     char hocluc;
     cout << "Nhap vao hoc luc"<<endl;
     cin >> hocluc;
     switch(hocluc) 
     { 
         case 'A': 
             cout << "Gioi!" << endl; 
             break; 
         case 'a': 
             cout << "Gioi!" << endl; 
             break;    
         case 'B' : 
		     cout << "Khá" << endl; 
             break;
         case 'C' : 
             cout << "Trung bình" << endl; 
             break; 
         case 'D' : 
             cout << "Yeu" << endl; 
             break; 
         case 'F' : 
             cout << "Kem, Phai hoc lai!!" << endl; 
             break; 
         default : 
             cout << "Gia tri khong hop le" << endl; 
     } 
     cout << "Hoc luc cua ban la " << hocluc << endl; 
     return 0; 
 }
