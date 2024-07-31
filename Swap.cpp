#include<iostream>
using namespace std;
 
template <class T>
void swapValues(T& a,T& b)
{
	T c;
	c=a;
	a=b;
	b=c;
	cout<<"SWAPPING DONE "<<  a << " & "<<  b ;
}
int main()
{
	int x = 3, y = 2;  
    swapValues(x, y); 
	
	return 0;
}
