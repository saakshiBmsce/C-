#include<iostream>
using namespace std;
int * func(int *a)
{
	int sum=0;
	for(int i=0;i<3;i++)
	{
		sum=sum+*a;
		a++;
	}
	cout<<sum;
	return a;
}
int main()
{
	int arr[3]={1,2,3},*arr1;
	arr1=(int *)func(arr);
	cout<<arr1[0];
	return 0;
}