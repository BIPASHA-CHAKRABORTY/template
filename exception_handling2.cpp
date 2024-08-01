//multiple catch block fro for single try block
#include<iostream>
using namespace std;

int main()
{
  int a;
  cout<<"Enter a:";
  cin>>a;
  try
  {
      if(a==1)
        throw(1);
      else if(a==-1)
        throw('a');
      else if(a==0)
        throw(1.0);
  }
  catch(int E)
  {
      cout<<"Exception Caught:"<<E;
  }
  catch(char C)
  {
      cout<<"Exception Caught:"<<C;
  }
  catch(double D)
  {
      cout<<"Exception Caught:"<<D;
  }
  
  return 0;
}
