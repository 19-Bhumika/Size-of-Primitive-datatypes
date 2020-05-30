#include<iostream>
using namespace std;
void Size()
{
	cout<<"Size of char:"<<sizeof(char)<<" byte";
	cout<<"\nSize of int:"<<sizeof(int)<<" bytes";
	cout<<"\nSize of float:"<<sizeof(float)<<" bytes";
	cout<<"\nSize of double:"<<sizeof(double)<<" bytes";
}
int main()
{
	Size();
	return 0;
}
