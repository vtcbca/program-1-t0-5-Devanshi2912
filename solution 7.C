#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,k;
	clrscr();
	printf("Enter any value:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(k=n;k>=i;k--)
		{
			printf("    ");
		}
		for(j=i;j>=0;j--)
		{
			printf(" %d",j);
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
	getch();
}