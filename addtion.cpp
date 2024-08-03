#include<iostream>
using namespace std;
 
template <class T1,class T2>
void add(T1& a,T2& b)
{

   auto c=a+b;
	cout<<"Addition DONE :"<<  c ;
}
int main()
{
	int x = 3, y = 2;  
    add(x, y); 
	
	return 0;
}
