#include<stdio.h>
int main(void)
{
	int i,n,r;
	double grade;
	scanf("%d\n",&n);
	r=0;
	for(i=1;i<=n;i++)
	{
		scanf("%lf",&grade);
	    if(grade<60)
	    r+=1;
	}
	printf("%.2f",r*1.0/n);

    return 0;	
}
