#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	ofstream of1;
	of1.open("first");
	of1<<"C++ "<<3<<endl;
	of1<<"DB  "<<4<<endl;
	of1.close();
	char s[20];
	int x;
	ifstream if1;
	if1.open("first");
	if1>>s>>x;
	cout<<s<<x<<endl;
	if1>>s>>x;
	cout<<s<<x<<endl;
	if1.close();
}

