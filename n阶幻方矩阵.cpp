#include<stdio.h>
int main()//hjdfakjlsdh
{
	int t,i,j,k,m=0,n,sum=0,item=0,flag=1;;
	int a[100][100]={0};	
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{ 
		sum=0;
		flag=1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<n;i++)
		{
			sum=sum+a[i][i];
		}
		for(i=0;i<n;i++)
		{	
			item=0;				
			for(j=0;j<n;j++)
			{
				item=item+a[i][j];
			}
			if(item!=sum)
			{
				flag=0;
			}	
		}		
		for(j=0;j<n;j++)
		{
			item=0;	
			for(i=0;i<n;i++)
			{
				item=item+a[i][j];
			}			
			if(item!=sum)
			{
				flag=0;
			}
		}
		item=0;	
		for(i=0;i<n;i++)
		{
			item=item+a[i][n-1-i];
		}
		if(item!=sum)
		{
			flag=0;
		}				
		if(flag==0)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	return 0;
}
