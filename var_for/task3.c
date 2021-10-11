#include <stdio.h>
#include <math.h>

void print(int n, int k)
{
	double a = 0;
	
	for (int i = 0; i < n; i++)
	{
		if ((i + 1) % k == 0)
		{
			continue;
		}
		a = pow(-1, i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		printf("%lf ", a);
	}
	printf("\n");
}