#include <stdio.h>

int main()
{
	int height, weight, a;

	while(1)
	{
		printf("enter height : ");
		scanf("%d", &height);

		printf("enter weight : ");
		scanf("%d", &weight);

		if(height>100 && weight>0)
		{
			break;
		}
		else
		{
			printf("error!!!!!!!\n");
		}
	}

	a=height-100;

	if(weight<a)
	{
		printf("멸치입니다.");
	}
	else if(weight>a)
	{
		printf("돼지입니다.");
	}
	else
	{
		printf("조각입니다.");
	}

	_getch();

	return 0;
}
