#include <iostream>
#include <conio.h>
#include <stdio.h>

int main()
{
	
	int n,i,j,s,ts;
	printf("Nhap N = "); scanf("%d",&n);
	printf("Cac so hoan hao khong vuot qua %d la: ",n);
	
	for (ts=0, i=2; i <=n; i++)
	{
		s=1;
		for (j=2; j<=i/2; j++)
			if (i%j == 0) s += j;
		if (s==i)
		{
			ts++;
			printf("\n %d = 1",i);
			for (j=2; j <= i/2; j++)
				if (i%j ==0) printf("   +   %d",j);
		}	
	}
	if (ts) printf("\n Co ta ca so %d la so hoan hao",ts);
	else printf("\n Khong co so hoan hao nao");
	return 0;	
}
