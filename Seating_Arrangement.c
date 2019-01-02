#include<stdio.h>
void check(int);
main()
{
	int n,c=0,i,j,s[18][6],flg;
	scanf("%d",&n);
	int sn[n];
		for(i=0;i<n;i++)
	{
		scanf("%d",&sn[i]);
	}
	
	
	
	for(i=0;i<18;i++)
	{
		for(j=0;j<6;j++)
		{
			c++;
			s[i][j]=c;
		}
		i++;
		for(j=5;j>=0;j--)
		{
			c++;
			s[i][j]=c;
		}
	}
	

for(c=0;c<n;c++)
{
flg=0;	
for(i=0;i<18;i++)
	{
		for(j=0;j<6;j++)
		{
		 if(s[i][j]==sn[c])	
		{
		    flg=1;
		    if(i%2==0)
		    i++;
		    else
		    i--;
			break;
		}
		}
		if(flg==1)
	{
	printf("%d ",s[i][j]);
	if(j==0||j==5)
	printf("WS\n");
	else if(j==1||j==4)
	printf("MS\n");
	else
	printf("AS\n");
	break;
    }
	}
	}
}
