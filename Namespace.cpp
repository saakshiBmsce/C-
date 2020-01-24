#include"name.h"
#include<iostream>
using namespace std;
using namespace Ns1;
using namespace Ns3;
int main()
{
	cout<<"variables from namespaces: "<<Ns1::nsv1<<" "<<Ns1::nsv2<<" "<<Ns1::Ns2::nsv1
	<<" "<<Ns1::Ns2::nsv2<<" "<<Ns3::nsv1<<" "<<Ns3::nsv2<<" "<<Ns3::Ns4::nsv1<<" "<<Ns3::Ns4::nsv2<<endl;
	Ns1::Test t;
	t.display();
}