#include<iostream>
#include<string>
using namespace std;
class sample
{
	private:
		int a,b;
	public:
		sample(int p,int q)
		{
			a=p;
			b=q;
		}
	friend float mean(sample s);
};
float mean(sample s)
{
	return(s.a+s.b)/2.0;
}
int main()
{
	sample s(10,20);
	cout<<"\nMean="<<mean(s);
	return 1;
}
