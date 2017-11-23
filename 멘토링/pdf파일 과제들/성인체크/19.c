#include <stdio.h>

int main()
{
	int a;

	printf("나이를 입력하세요 : ");
	scanf("%d", &a);

	if(a>19 && a<150)
	{
		printf("\n성인입니다.");
	}
	else if(a<20)
	{
		printf("\n성인이 되려면 %d년 남았습니다.", 19-a);;
	}
	else
	{
		printf("\n사람이 아닙니다.");
	}


	_getch();

	return 0;
}