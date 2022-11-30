#include<bits/stdc++.h>
#include <sstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <iostream>
#include <stdio.h>
#include<io.h>
using namespace std;
int main(){
	const std::string baseFolderName = "TEST";
	for (int i = 1; i <= 20; ++i)
	{
	    std::ostringstream folderName;
	    if (i<10){
	    	folderName << baseFolderName + "0"<<i;
	    	mode_t mode = 0;
	    	mkdir(folderName.str().c_str());
		}
		else{
				folderName << baseFolderName <<i;
			mode_t mode = 0;
	    	mkdir(folderName.str().c_str());
		}
	  	string m="D:\\cpp\\"+folderName.str()+"\\cong.out";
	    freopen(m.c_str(),"w",stdout);
	    cout<<i+1;
 	}
 return 0;
}