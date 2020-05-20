#include<iostream>
using namespace std;
int main()
{
	int N,sum=0;
	cout<<"enter an no ";
	cin>>N;
	for(int i=0;i<=N;i++)
	{
		sum=sum+i;
	}
	cout<<"sum of N natural no "<<sum;
	return 0;
}
