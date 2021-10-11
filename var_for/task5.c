#include <math.h>

int findFirstNegativeElement(double eps)
{
	int i = 0;
	double a;

	for (i; ;i++)
	{
		a = pow(-1, i)*(pow(i, 2) + 1) / (pow(i, 3) + 3);
		if (fabs(a) <= eps && a < 0)
		{
			return ++i;
		}
	}
	
}