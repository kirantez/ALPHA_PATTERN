#include<stdio.h>
int main()
{
    int i,j,temp=0,count=0,k=24,a=26,b=73;
    for (i=0;i<=23;i++)
    {
	for (j=1;j<=50;j++)
	{
	    if ( (j>=(k) && j<=a) )
	    {
		temp=b+j;
		printf("%c ",temp);
	    }
	    else
		printf(" ");
	}
	printf("\n");
	k--;
	b++;
    }
}
