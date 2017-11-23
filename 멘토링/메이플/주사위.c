/*******************
메이플 따라 프로그램
********************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
	int a,b,c,d,i = 0;

	srand((unsigned)time(NULL));


	while(1)
	{
		while(1)
		{
			a = rand() % 9 + 4;
		
			b = rand() % 9 + 4;

			c = rand() % 9 + 4;

			d = rand() % 9 + 4;

			if(a+b+c+d == 31)
			{
				break;
			}
		}

		printf("Maple Story---\nSTR : %d\nDEX : %d\nINT : %d\nLUX : %d\n--------------",a,b,c,d);
		printf("\nend(1)? : ");
		scanf("%d", &
			i);
		if(i == 1)
		{
			break;
		}
		system("cls");
	}

	return 0;
}
	