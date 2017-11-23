#include <stdio.h>

int main()
{
	int i=0;

	for(i=0; i<101; i++)
	{
		if(i%2==0)
		{
			printf("%d ", i);
		}
		else if(i%3==0)
		{
			printf("%d ", i);
		}
		if(i==5)
		{
			printf("%d ", i);
		}
		else if (i%2!=0 && i%3!=0 && i%5!=0)
		{
			printf("%d ", i);
		}
	}
	scanf("%d",&i);
	
	return 0;
}