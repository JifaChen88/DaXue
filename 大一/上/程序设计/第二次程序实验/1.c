#include<stdio.h>
int main(void)
{
	char ch;
	ch=getchar();
	if(ch>='a' && ch<='z')
	ch-=32;
    if(ch>='A' && ch<='Z')
	ch+=32;
	
	printf("%c",ch);
	
return 0;	
	
}

