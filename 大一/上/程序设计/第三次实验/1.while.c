#include<stdio.h>
int main(void)
{
	int i,n,r;
	double grade;
	r=0;
	i=1;
	scanf("%d",&n);
	
	while(i<=n)
   {
   	scanf("%lf",&grade);
   	if(grade<60)
   	r++;
   	i++;
	}
	
	printf("%.2f",r*1.0/n);
	
	return 0;

}
