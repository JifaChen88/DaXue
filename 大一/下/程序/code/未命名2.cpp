#include <iostream>

using namespace std;

double * f( )

{double* s;

      s=new double[10];

      if(!s)

      {  cout<<"allocation failure\n";

         return 0;

      }

      for(int i=0;i<10;i++)

         s[i]=100.00+2*i;

      for(int i=0;i<10;i++)

         cout<<s[i]<<" ";

delete []s;  //���1

     return s;}

 

 

int main()

{  double* s;

   s=f();

//delete s[];  ���2

//delete s;  ���3

cout<<s[1]<<s[4];//���4

}
