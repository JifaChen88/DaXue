#include<stdio.h>
int main()

{
	double a,d,n,s;
	scanf("%lf%lf%lf",&a,&d,&n);
	s=n*a+(n-1)*n*d/2;
	printf("%.2f",s);
	
	return 0;
	
}
