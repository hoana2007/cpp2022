#include<stdio.h>
#include<conio.h>
#include <iostream>
int main()
{
	int a,b;
	char dv,chuc,tram;
	//Lenh printf giong voi lenh cout, scanf giong voi lenh cin
	printf("Nhap so bi nhan co 3 chu so a="); scanf("%d",&a);
	printf("Nhap so nhan co 3 chu so b="); scanf("%d",&b);
	dv=b%10; 
	chuc=b%100/10; 
	tram=b/100;
	printf("\nMo phong phep nhan tay\n\n");
	printf("%20d\n",a);
	printf("%15c%5d\n",'x',b);
	printf("%20s\n","-------");
	printf("%20d\n",a*dv);
	printf("%19d\n",a*chuc);
	printf("%18d\n",a*tram);
	printf("%20s\n","-------");
	printf("%20ld\n",long(a)*b); //ket qua nhan ve
getch();
return 0;
}

