#include <stdio.h>

int main()
{
	int a;

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &a);

	if(a>19 && a<150)
	{
		printf("\n�����Դϴ�.");
	}
	else if(a<20)
	{
		printf("\n������ �Ƿ��� %d�� ���ҽ��ϴ�.", 19-a);;
	}
	else
	{
		printf("\n����� �ƴմϴ�.");
	}


	_getch();

	return 0;
}