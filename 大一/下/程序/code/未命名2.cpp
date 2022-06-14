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

delete []s;  //Óï¾ä1

     return s;}

 

 

int main()

{  double* s;

   s=f();

//delete s[];  Óï¾ä2

//delete s;  Óï¾ä3

cout<<s[1]<<s[4];//Óï¾ä4

}
