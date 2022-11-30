#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	
	fstream f1,f2;
	f1.open("tien_dien.txt", ios::in);
	
	int soDien;
	f1>>soDien;
	float tienDien;
	int bac1=1678, bac2=1734, bac3=2014, bac4=2536, bac5=2834, bac6=2927;
	if (soDien<=0) cout <<"So dien khong hop le";
	else if(soDien <= 50)	tienDien = soDien*bac1;
	else if (soDien <= 100)	tienDien = 50*bac1 + ((soDien-50)*bac2);
	else if (soDien <= 200)	tienDien = 50*bac1 + (50*bac2) + ((soDien-100)*bac3);
	else if (soDien <= 300) tienDien = 50*bac1+(50*bac2)+(100*bac3)+((soDien-200)*bac4);
	else if (soDien <= 400) tienDien = 50*bac1+(50*bac2)+(100*bac3)+(100*bac4)+((soDien-300)*bac5);
	else if (soDien > 400)  tienDien = 50*bac1+(50*bac2)+(100*bac3)+(100*bac4)+(100*bac5)+((soDien-400)*bac6);
	
	tienDien = tienDien + (tienDien*10/100);
	
	f2.open("tien_dien.out", ios::out);
	f2<<tienDien;
	f1.close();
	f2.close();
	return 0;
}
