#include <stdio.h>

int main()

{ int a,b,c;

  printf("10Ԫ\t20Ԫ\t50Ԫ\n"); 

  for(c=0;c<101;c+=50)

    for(b=0;b<101-c;b+=20)

    {a=100-c-b;

     printf("%d\t%d\t%d\n",a/10,b/20,c/50);

}

  return 0;

}
