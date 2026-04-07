//patterns
#include<iostream>
using namespace std;

int main()
{
	int N;
	cin>>N;
	//upper half
	for(int i=1;i<=N;i++)
	{
		for(int s=1;s<=N-i;s++)
		cout<<" ";
		for(int k=1;k<=(2*i-1);k++)
		cout<<"*";
		cout<<endl;
	}
	//Lower half
	for(int i=N;i>=1;i--)
	{
		for(int s=1;s<=N-i;s++)
		cout<<" ";
		for(int k=1;k<=(2*i-1);k++)
		cout<<"*";
		cout<<endl;
	}
	return 0;
}
	
	
