#include<iostream>
using namespace std;
namespace Ns1
{
	int nsv1=11,nsv2=12;
	namespace Ns2
	{
		int nsv1=21,nsv2=22;
	}
	class Test
	{
		int t1,t2;
	public:
		Test(){t1=0;t2=0;}
		Test(int x,int y){t1=x;t2=y;}
		void display(){cout<<t1<<" "<<t2<<endl;}
	};
}

namespace Ns3
{
	int nsv1=31,nsv2=32;
	namespace Ns4
	{
		int nsv1=41,nsv2=42;
	}
}
