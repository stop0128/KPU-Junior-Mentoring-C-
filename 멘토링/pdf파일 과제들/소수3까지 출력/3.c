#include <stdio.h>

int main()
{
	double a;
	float b;

	printf("input number(double) : ");
	scanf("%lf",&a);

	printf("\ninput number(float) : ");
	scanf("%f",&b);
	printf("\nentered number(double) : %.3lf", a);
	printf("\nentered number(float) : %.3f", b);

	_getch();
	
	return 0;
}
