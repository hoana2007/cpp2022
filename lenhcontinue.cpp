#include <iostream> 
 using namespace std; 
 int main () 
 { 
     // Khai bao bien cuc bo:   
     int a = 1; 
     // vong lap do...while 
     do 
     { 
        if(a % 5 == 0) 
        { 
           // nhay qua buoc lap. 
           a = a + 1; 
           continue; 
        } 
        cout << "Gia tri cua a la: " << a << endl; 
        a = a + 1; 
     }while(a < 20); 
     return 0; 
 }
