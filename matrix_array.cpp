//
#include<iostream>
using namespace std;

int main()
{
	int N,M;
	cin>>N>>M;
	char arr[N][M];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cin>>arr[i][j];
		}
	}
	int x,y;
	cin>>x>>y;
	bool flag=true;
	if(x>0 && arr[x-1][y]!='x')
	flag=false;
	if(x<N-1 && arr[x+1][y]!='x')
	flag=false;
	if(y>0 && arr[x][y-1]!='x')
	flag=false;
	if(y<M-1 && arr[x][y+1]!='x')
	flag=false;
	if(flag)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
