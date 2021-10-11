#include <math.h>

double summ2(double eps)
{
	double sum = 0;
	int i = 0;
	double a;

	a = pow(-1, i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
	while (fabs(a) > eps)
	{
		a = pow(-1, i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		sum += a;
		i++;
	}
	return sum;
}
