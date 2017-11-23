#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void maaa(int *);
void random(int *, int);

int main()
{
	int i=0, b=0;	// b=Input Number
	int c[20];

	srand((unsigned)time(NULL));

	while(1)
	{
		printf("Input Number : ");
		scanf("%d", &b);
		if(b<20)
		{
			printf("error!!!!!!\n");
		}
		else
		{
			break;
		}
	}
	printf("\nNumbers are : ");

	random(c, b);

	for(i=0;i<20;i++)
	{
		printf("%d ",c[i]);
	}

	printf("\npassion : ");
	
	maaa(c);

	for(i=0;i<20;i++)
	{
		printf("%d ",c[i]);
	}

	_getch();

	return 0;
}

void maaa(int *a)
{
	int i,j,b;
	
	for(j=0; j<20; j++)
	{
		for(i=0; i<j; i++)
		{
			if(a[j]<a[i])
			{
				b=a[j];
				a[j]=a[i];
				a[i]=b;
			}
		}
	}
}

void random(int *c, int b)
{
	int a=0, j=0, i=0, ch = 0;	// i=loop
	while(i<20)
	{
		ch = 0;
		a = rand()%b;

		for(j=0;j<=i;j++)
		{
			if(a==c[j])
			{
				ch = 1;
				break;
			}
		}
		if(ch == 0)
		{
			c[i] = a;
			i++;
		}
	}
}
