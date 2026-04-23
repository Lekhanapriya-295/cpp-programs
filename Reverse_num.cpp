//reverse number
#include<iostream>
using namespace std;

int main()
{
	int n,rev=0,temp;
	cin>>n;
	while(n>0)
	{
		rev=rev*10+(n%10);
		n=n/10;
	}
	cout<<rev<<endl;
	if(rev==temp)
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
}

	
