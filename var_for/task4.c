#include <math.h>

int findFirstElement(double eps)
{
	int i = 0;
	double a;

	for (i; ;i++)
	{
		a = pow(-1, i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		if (fabs(a) <= eps)
		{
			break;
		}
	}
	return ++i;
}