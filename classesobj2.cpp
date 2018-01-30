#include<iostream>
using namespace std;

class CTriangle
{
	private:
		int x,y;
		
	public:
		
		void set_value(int , int);
	   
		int calArea()
		{
			return (x*y)/2;
		}
		
		int print()
		{
			cout<<"The area is "<<calArea()<<endl;
		}
	
};

void CTriangle::set_value(int base, int height)
{
	x=base;
	y=height;
}

int main()
{
	CTriangle obj;
	obj.set_value(7,7);
	obj.calArea();
	obj.print();
}
