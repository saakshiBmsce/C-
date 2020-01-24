#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{

	ifstream r;
	r.open("first");
	int c=1;
	char ch;
	while(!r.eof())
	{
		if(c%2!=0)
		{
			r.get(ch);
			cout<<ch;
		}
		c++;
	}
	r.close();
}