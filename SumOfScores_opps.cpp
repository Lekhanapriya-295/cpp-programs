//write a program using oops concept
#include<iostream>
using namespace std;
class student
{
	private:
		int scores[5];
	public:
		void input()
		{
			for(int i=0;i<5;i++)
			{
				cin>>scores[i];
			}
		}
		int calculateTotalscore()
		{
			int sum=0;
			for(int i=0;i<5;i++)
			{
			sum+=scores[i];
		    }
			return sum;
		}
};
int main()
{
	student s;
	cout<<"Enter 5 students score:"<<endl;
	s.input();
	cout<<"total score:"<<s.calculateTotalscore()<<endl;
}
