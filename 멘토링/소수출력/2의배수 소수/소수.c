#include <stdio.h>

int main()
{
	int j, i, e=0, d=101;

	for(i=1; i<=101; i++)
	{
/*		if(i%2==0 || i%3==0)
		{
			printf(" %d", i);
		}

		else*/
		{
			for(j=1; j<=i; j++)
			{
				if(i%j==0)
				{
					e++;
				}
			}
			if(e<=2)
			{
				printf(" %d", i);
			}
		}
		e=0;
	}

	scanf("%d", &d);

	return 0;
}

