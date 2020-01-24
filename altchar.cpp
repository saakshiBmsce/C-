#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{

	fstream r;
	r.open("first");
	r.seekg(0,ios::end);
	cout<<r.tellg();
	int c=0;
	char ch;
	r.seekg(0,ios::beg);
	while(!r.eof())
	{   r.get(ch);
		if(c%2==0)
		{	
			cout<<ch;
			//r.seekg(1,ios::cur);
		}
		c++;
		//r.seekg(1,ios::cur);
	}
	r.close();
}