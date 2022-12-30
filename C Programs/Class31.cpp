#include<iostream>
using namespace std;
class seconds
{
  public:
       int h,m,s;
       int hour(int s);
	   int minute(int s);	
};
int seconds::minute(int s)
{
	m=s/60;
	return m;
}
int seconds::hour(int s)
{
	h=s/3600;
	return h;
}
int main()
{
	seconds a;
	cout<<"\nEnter Seconds";
	cin>>a.s;
	cout<<"\nSeconds into Minutes="<<a.minute(a.s);
	cout<<"\nSeconds into Hours="<<a.hour(a.s);
	return 1;
}
