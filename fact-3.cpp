#include<stdio.h>
int main()
{
	int n,i,f;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;	
	}
	printf("%dfactorial",f);
}
