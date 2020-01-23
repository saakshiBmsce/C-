//#include <iostream>
//using namespace std;
//class A
//{
//	int pvt;
//	public:int pbl;
//	protected:int ptd;
//	
//	void seta()
//	{	
//		cout<<"A value";
//		cin>>pvt>>pbl>>ptd;
//	}
//};
//class B:public A
//{
//	void show()
//	{
//		cout<<"pbl: "<<pbl<<" ptd: "<<ptd;
//	}
//};
//
//class C:public A
//{
//	void show()
//	{
//		cout<<"pbl: "<<pbl<<" ptd: "<<ptd;
//	}
//};
//int main()
//{
//	B b;
//	
//	return 0;
//}
//
//class C:virtual public A
//{
//	public:int cx;
//	void setc()
//	{
//		cout<<"C value";
//		cin>>cx;
//	}
//};
//class D:public B,public C
//{
//	public:int dx;
//	void setd()
//	{
//		cout<<"D value";
//		cin>>dx;
//	}
//};
//int main()
//{
//	D d;
//	d.bx=4;
//	d.dx=4;
//	d.x=5;
//}
//
