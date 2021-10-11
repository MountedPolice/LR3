#include <math.h>

double summ(int n)
{
	double sum = 0;
	int i = 0;

	if (n == 0)
	{
		return 0;
	}
	else
	{
		do
		{
			sum += pow(-1, i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
			++i;
		} while (i < n);
		return sum;
	}
}

