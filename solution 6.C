#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	getch();
}
