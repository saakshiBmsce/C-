//#include<iostream>
//using namespace std;
//class twoD
//{
//public:
//	virtual void area()=0;
//	void dis(){cout<<"try!!";}
//};
//
//class circle:public twoD
//{	
//	int r;
//	public:
//	void area()
//	{	
//		cout<<"Circle Dim";
//		cin>>r;
//		cout<<"circle area: "<<(3.14*r*r)<<"\n";
//	}
//};
//
//class rect :public twoD
//{
//	int x,y;
//	public:
//	void area()
//	{
//		cout<<"REct area: ";
//		cin>>x>>y;
//		cout<<"rect area:  "<<(x*y);
//	}
//};
//
//int main()
//{
//	twoD *b;
//	circle c;
//	rect r;
//	b=&c;b->area();b->dis();
//	b=&r;b->area();
//
//}
//
//
//Pgm2
//
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
