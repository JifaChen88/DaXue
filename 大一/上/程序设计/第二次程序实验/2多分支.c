#include<stdio.h>
int main(void)
{
	int nummer;
	scanf("%d",&nummer);
    if((nummer==59)||(nummer==316)||(nummer==875)) 
      printf("一等奖");
    else if((nummer==27)||(nummer==209)||(nummer==596)) 
      printf("二等奖");
    else if((nummer==9)||(nummer==12)||(nummer==131)) 
      printf("三等奖");
	else
      printf("不中奖"); 
	return 0; 
	
	
	
}
