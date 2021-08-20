#include<stdio.h>
void main()
{
	int i, n,p;
	printf("\n enter a value n:");
	scanf("%d",&n);
	p=1;
	i=1;
	while(i<=n)
	{
		p=p*i;
		i++;
	}
	printf("\n %d factorial=%d",n,p);
}
