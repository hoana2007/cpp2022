#include <iostream> 
 using namespace std; 
 int main () 
 { 
     //Khai báo bien
     int a = 101; 
     //Kiem tra Boolean 
     if(a == 11) 
     { 
         //neu true:
         cout << "Gia tri cua a la 11" << endl;         
     } 
     else if(a == 28) 
     { 
         //Neu dieu kien else if la True:
         cout << "Gia tri cua a la 28" << endl;        
     } 
     else if(a == 36) 
     { 
         //Neu dieu kien else if la True: 
         cout << "Gia tri cua a la 36" << endl;        
     } 
     else 
     { 
         //neu tat ca ca dieu kien tren deu khong dung
         cout << "Gia tri cua a khong phu hop voi dieu kien tren" << endl; } 
         cout << "Gia tri chinh xac cua a la: " << a << endl; 
         return 0;    
 }
