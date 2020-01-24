//#include<iostream>
//using namespace std;
//class Publication
//{
//	char title[25];
//	float price;
//	public:void get()
//	{
//		cout<<"Enter title price: ";
//		cin>>title>>price;
//	}
//	
//	public:void put()
//	{
//		cout<<"title: "<<title<<"\nprice: "<<price<<"\n";
//	}
//};
//
//class Sales
//{
//	float sales[3];
//public:
//	void get()
//	{
//		cout<<"sales: \n";
//		for(int i=0;i<3;i++)
//		{
//			cin>>sales[i];
//		}
//	}
//	
//	void put()
//	{
//		cout<<"sales: \n";
//		for(int i=0;i<3;i++)
//		{
//			cout<<sales[i];
//		}
//	}
//};
//class Book: public Publication,public Sales
//{
//	int page;
//	public:void get()
//	{	
//		Publication::get();
//		Sales::get();
//		cout<<"Enter page count: ";
//		cin>>page;
//	}
	
//	public:void put()
//	{
//		Publication::put();
//		Sales::put();
//		cout<<"page count: "<<page<<"\n";
//	}
//};
//
//class Tape: public Publication,public Sales
//{
//	float time;
//	public:void get()
//	{	
//		Publication::get();
//		Sales::get();
//		cout<<"Enter time count: ";
//		cin>>time;
//	}
//	
//	public:void put()
//	{
//		Publication::put();
//		Sales::put();
//		cout<<"time count: "<<time<<"\n";
//	}
//};
//
//int main()
//{
//	Tape t;
//	Book b;
//	b.get();
//	b.put();
//	t.get();
//	t.put();
//}
