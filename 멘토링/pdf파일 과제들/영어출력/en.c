#include <stdio.h>

int main()
{
	int a;
	
	while(1)
	{
		printf("\n1. ������\n2. �����\n3. ��");
		printf("\nenglish please : ");
		scanf("%d", &a);
		if(a>=0 && a<=3)
		{
			break;
		}
		printf("error!!!!!");
	}

	switch(a)
	{
		case 1:
		printf("dog");
		break;

		case 2:
		printf("cat");
		break;

		case 3:
		printf("mouse");
		break;
	}

	_getch();

	return 0;
}