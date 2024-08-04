//Different dataypes have different class template.
//such as given below example as char dataype has different class of as class T2 and for integers its class T

#include<iostream>
using namespace std;
 
template <class T , class T2>
void add(T& a, T& b,T2& d)
{
  auto c = a+b+d;
  cout<<c;
};

int main()
{
    int a=9,b=6;
    char d='j';
    add(a,b,d);
    
 return 0;
}
