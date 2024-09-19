//Write a program to print the area of two rectangles having sides (4,5) and (5,8) 
//respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length
// Name:Pradipkumar Mane
// ROLL_NO:36
#include<iostream>
using namespace std;
class Reactangle
{
	private:
		int length,breadth;
	public:
		void area(int L,int B)
		{
			int A;
			length=L;
			breadth=B;
			A=L*B;
			cout<<"\n Area of rectangle L&B:"<<L<<" & "<<B<<" = "<<A;
		}
};
int main()
{
	Reactangle R;
	R.area(4,5);
	R.area(5,8);
	
	return 0;
}
