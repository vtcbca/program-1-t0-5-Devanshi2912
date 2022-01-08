#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,c=2;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&a);
	for(c=2;c<a;c++)
	{
		if(a%b==0)
		{
			printf("\ntrue");
			b=1;
			break;
		}
	}
	if(b==0)
	{
		printf("%d is a prime number.");
	}
	else
	{
		printf("%d is not a prime number.");
	}
	getch();
}

