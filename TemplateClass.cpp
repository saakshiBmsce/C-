#include<iostream>
using namespace std;
template<class T>
class Stack
{
	T arr[10];
	public:
	int t;

	void push(T x)
	{
		if(t==9){cout<<"overflow";}
		else{
			arr[++t]=x;
		}
	}
	
	T pop()
	{
		if(t==-1){cout<<"UnderFlow";return 0;}
		else{
			return arr[t--];
		}
	}
	
	void dis()
	{
		for(int i=t-1;i>=0;i--)
		{
			cout<<arr[i]<<endl;
		}
	}
};

int main()
{
	Stack<int> s1;s1.t=-1;
	s1.push(1);s1.push(2);s1.push(3);s1.push(4);cout<<s1.pop();s1.push(5);
	s1.dis();
	Stack<float> s2;s2.t=-1;
	s2.push(1.1);s2.push(2.2);s2.push(3.2);s2.push(4.2);cout<<" "<<s2.pop()<<" ";s2.push(5.5);
	s2.dis();
}