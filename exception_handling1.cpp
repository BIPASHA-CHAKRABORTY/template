#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter the value of a and b";
  cin>>a>>b;
  try
  {
    if(b==0)
      throw(b);
    else
      c=a/b;
      cout<<c;
  }
  catch(int E)
   {
    cout<<"Exception caught"<<E;
   }
 return 0;
}
