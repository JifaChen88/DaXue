#include<stdio.h>

void f(int );
int main()
{
	int n;
	printf("please input one number:");
	scanf("%d",&n);
	f(n);
	printf("\n");
	return 0;
}
void f(int n)
{
	if(n>0)
	{
		printf("%d",n%10);
		f(n/10);
	}
}

