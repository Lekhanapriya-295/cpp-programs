//to find the position of the point(x,y)
#include<iostream>
using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	if(x==0 && y==0)
	cout<<"origem";
	else if(x==0)
	cout<<"EIXO Y";
	else if(y==0)
	cout<<"EIXO X";
	else if(x>0 && y>0)
	cout<<"Q1";
	else if(x<0 && y>0)
	cout<<"Q2";
	else if(x<0 && y<0)
	cout<<"Q3";
	else
	cout<<"Q4";
		return 0;
		
}
