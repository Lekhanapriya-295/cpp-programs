#include<iostream>
using namespace std;
class Box
{
	private:
		int l,b,h;
	public:
		//default constructor
		Box()
		{
			l=0;
			b=0;
			h=0;
		}
		//parameterised constructor
		Box(int length,int breadth,int height)
		{
			l=length;
			b=breadth;
			h=height;
		}	
		//copy constructor
		Box(const Box &B)
		{
			l=B.l;
			b=B.b;
			h=B.h;
		}
		//getter functions
		int getLength()
		{
			return l;
		}
		int getBreadth()
		{
			return b;
		}
		int getHeight()
		{
			return h;
		}
		//volume calculations
		long long CalculateVolume()
		{
			return (long long)l*b*h;
		}
};
int main()
{
	Box b1;
	cout<<"default box volume:"<<b1.CalculateVolume()<<endl;
	Box b2(2,4,5);
	cout<<"box2 dimensions:"<<b2.getLength()<<" "<<b2.getBreadth()<<" "<<b2.getHeight()<<endl;
	cout<<"box2 volume:"<<b2.CalculateVolume()<<endl;
	Box b3(b2);
	cout<<"box3 volume(copied from box2):"<<b3.CalculateVolume()<<endl;
	return 0;
}
