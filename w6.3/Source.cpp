#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void area(float, float);
void plot(float, float);
int main()
{
	float h, w;
	printf(" Enter you height (cm)=> ");
	scanf("%f", &h);
	printf(" Enter you width (cm)=> ");
	scanf("%f", &w);
	area(h, w);
	printf("\n");
	plot(h, w);
	return 0;
}
void area(float h, float w)
{
	float area;
	area = h * w;

	printf(" Area = %.4f (cm) \n", area);
	if (w == h)
	{
		printf(" Square\n");
	}
	else
	{
		printf(" Regtangle\n");
	}
}

void plot(float h, float w)
{
	for (float i = 0;i < h;i++)
	{
		for (float j = 0;j < w;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
}