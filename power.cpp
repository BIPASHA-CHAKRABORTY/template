#include<iostream>
using namespace std;

double power(double m,int n=2)
{
 double result=1;
 for(int i=0;i<n;i++)
 {
  result *=m;
 }
return result;
};
int main()
{
 int n=2;
 double m;
 cout<<"enter any value:";
 cin>>m;
 
 cout<<"Ans:"<<power(m,n);
  
 return 0;
}
