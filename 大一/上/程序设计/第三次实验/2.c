#include<stdio.h>
int main(void)
{
	int age,i=0;
	int sum=0,max=0,min=50;
	double average;

	while(scanf("%d",&age),age!=-1)
	{
		
		if(age>50)
		{
		  printf("年龄大于50，请重新输入");
		  break;
	    }

	 sum+=age;
	
	 if(age>max)
	 max=age;
	
	 if(age<min)
 	 min=age;
	 i++;
	}
	
	if(age==-1)
	{
	
	average=sum*1.0/i;
	printf("%d %d %.2f",max,min,average);
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
