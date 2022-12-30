#include<iostream>
using namespace std;
void milk()
{ 
    int n,q,p;
	cout<<"\nEnter Milk Buy";
	cin>>n;
	cout<<"\nCost of Buying of Milk"<<n*3.25;
	q=n+(n/4);
	p=n*4.15;
	cout<<"\nCost of Selling of Milk"<<p;
	cout<<"\nProfit is "<<p-q<<" Ruppes";
}
int main()
{
	void milk();
	milk();
	return 1;
}
