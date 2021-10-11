#include <math.h>

double summ(int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += pow(-1, i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
	}
	return sum;
}
