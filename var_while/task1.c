#include <math.h>

double summ(int n)
{
	double sum = 0;
	int i = 0;

	while (i < n)
	{
		sum += pow(-1, i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		++i;
	}

	return sum;
}
