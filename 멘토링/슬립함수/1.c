#include <stdio.h>
#include <time.h>
#include <windows.h>

int main()
{
	int i=60;

	while(1)
	{
		printf(" %d", i);

		if(i==0)
		{
			break;
		}
		i=i-1;
		Sleep(1000);
	}

	printf("น฿ป็");

	_getch();

	return 0;
}