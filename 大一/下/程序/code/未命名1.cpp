#include <iostream>
using namespace std;
int main()
{  double* s;
      s=new double[10];
      if(!s)
      {  cout<<"allocation failure\n";
         return 1;
      }
      for(int i=0;i<10;i++)
         s[i]=100.00+2*i;
      for(int i=0;i<10;i++)
         cout<<s[i]<<" ";
      delete []s;
      return 0;
}

