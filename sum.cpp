#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,x=1,first=0,second=1,sum;
	printf("enter n:");
	scanf("%d",&n);
	
	printf("%d %d ",first,second);
	for(i=1;i<=n;i++)
	{
	 
		x=x+8;
		sum=first+second;
		printf("%d ",sum);
		first=second;
		second=sum;
	}
}
