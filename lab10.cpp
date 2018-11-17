/* Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles */

//define library
#include<iostream>
using namespace std;
//create a class that stores data of length and breadth and two function
class rect{
	public:
		double length;
		double breadth;
//member function declaration
		double area(void);
		double perimeter(void);
		void setlength(double len);
		void setbreadth(double bre);
	};
//member function definition
	double rect::area(void)
	{
		return length*breadth;
	}
	double rect::perimeter(void)
	{
		return 2*(length+breadth);
	}
	void rect::setlength(double len)
	{
		length=len;
	}
	void rect::setbreadth(double bre)
	{
		breadth=bre;
	}
//main function for the program
int main()
{
//declare objects
	rect rect1;
	rect rect2;
//declare variables
	double l1,b1,l2,b2,area1,area2,perimeter1,perimeter2;
//ask user for value of length and breadth
	cout<<"enter the length of rect1"<<endl;
	cin>>l1;
	cout<<"enter the breadth of rect1"<<endl;
	cin>>b1;
	cout<<"enter the length of rect2"<<endl;
	cin>>l2;
	cout<<"enter the breadth of rect2"<<endl;
	cin>>b2;
//rect1 specification
	rect1.setlength(l1);
	rect1.setbreadth(b1);
//rect2 specification
	rect2.setlength(l2);
	rect2.setbreadth(b2);
//area of rect1
	area1=rect1.area();
	cout<<"the area is: "<<area1<<endl;
//perimeter of rect1
	perimeter1=rect1.perimeter();
	cout<<"the perimeter is: "<<perimeter1<<endl;
//area of rect2
	area2=rect2.area();
	cout<<"the area is: "<<area2<<endl;
//perimeter of rect2
	perimeter2=rect2.perimeter();
	cout<<"the perimeter is: "<<perimeter2<<endl;
//compare the rectangles
	if(area1>area2)
	{
		cout<<"rect1 is greater than rect2"<<endl;
	}
	else
	{
		cout<<"rect2 is greater than rect1"<<endl;
	}
	return 0;
}

