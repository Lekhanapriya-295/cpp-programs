//second largest element from the array
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n<2)
	{
		cout<<-1;
		return 0;
	}
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int largest=INT_MIN;
	int secondlargest=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>largest)
		{
			secondlargest=largest;
			largest=arr[i];
		}
		else if(arr[i]<largest && arr[i]>secondlargest)
		{
			secondlargest=arr[i];
		}
	}
	if(secondlargest==INT_MIN)
	{
		cout<<-1;
	}
	else
	{
		cout<<secondlargest;
		return 0;
	}
}

	
	
