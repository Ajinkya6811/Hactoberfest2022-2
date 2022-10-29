#include<iostream>
using namespace std;
int area(int);
int area(int,int);
int area(int,int);
int main()
{
	int r,l,b,base,height;
	cout<<"Enter the radious : ";
	cin>>r;
	cout<<"Enter the length and bredth :";
	cin>>l>>b;
	cout<<"Enter the base and height :";
	cin>>base>>height;
	cout<<"Area of circle "<<area(r);
	cout<<"Area of rectangle "<<area(l,b);
	cout<<"Area of triangle "<<area(base,height);
}
int area(int r)
{
	return(3.14 * r * r);
}
int area (int l, int b)
{
	return(l * b);
}
int area(float base, float height)
{
	return(0.5 * base * height);
}
