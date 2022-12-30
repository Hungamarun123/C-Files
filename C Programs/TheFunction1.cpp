#include<iostream>
#include<string>
using namespace std;
inline int max(int x,int y)
{
	return (x>y)?x:y;
}
int main()
{
	cout<<"\n"<<max(10,20);
	cout<<"\n"<<max(30,10);
	cout<<"\n"<<max(40,50);
	cout<<"\n"<<max(70,30);
	return 1;
}
