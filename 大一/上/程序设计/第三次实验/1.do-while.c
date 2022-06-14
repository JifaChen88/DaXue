#include<stdio.h>
int main(void)
{
   	int n,r,i=1;
	double grade;
	scanf("%d",&n);
	r=0;
	do
	{
		scanf("%lf",&grade);
		if(grade<60)
		r++;
		i++;
	} while(i<=n);
	printf("%.2f",r*1.0/n);
	
	return 0;
}
