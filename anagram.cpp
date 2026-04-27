//min steps to make anagram
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string s,t;
	cin>>s>>t;
	vector<int>count(26,0);
	for(char c:s)
	{
		count[c-'a']++;
	}
	for(char c:t)
	{
		count[c-'a']--;
	}
	int steps=0;
	for(int x:count)
	{
		if(x>0)
		{
		steps+=x;
		}
	}
	cout<<steps<<endl;
	return 0;
}
