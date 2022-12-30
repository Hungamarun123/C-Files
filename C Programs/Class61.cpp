#include<iostream>
#include<string>
using namespace std;
template<class t>
class A
{
	t a;
	t b;
	public:
		A(t x,t y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"Value of A and B are "<<a<<b;
		}
};
int main()
{
	A<int> d(4,3);
	d.display();
	A<float> d1(1.2,2.3);
	d.display();
	return 1;
}
