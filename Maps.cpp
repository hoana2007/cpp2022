#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, string> dictionary;
	dictionary["eat"] = "an";
	dictionary["sleep"] = "ngu";
	cout<< dictionary["eat"];
	return 0;
}
