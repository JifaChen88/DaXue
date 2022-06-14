#include<stdio.h>
int main(void)
{
	int nummer;
	scanf("%d",&nummer);
	switch(nummer)
	{
		case 59:
		case 316:
		case 875:
		printf("一等奖");break; 
		case 27:
		case 209:
		case 596:
		printf("二等奖");break; 
		case 9:
		case 12:
		case 131:
		printf("三等奖");break; 
		default:printf("不中奖");break;
			
	}
        return 0;
}
