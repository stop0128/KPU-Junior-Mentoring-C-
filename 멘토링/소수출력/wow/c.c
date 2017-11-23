#include <stdio.h>

int main()
{
	int i=0, j, count;

	for(i=2; i<=100; i++)
	{
		for(j=2; j<=i; j++)
		{
			if(i%j==0)
			{
				count++;
			}
			if(count<=2)
			{
				printf(" %d", i);
			}
		}
		count=0;
	}

	scanf("%d", &i);

	return 0;
}