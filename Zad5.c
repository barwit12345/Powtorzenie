#include <stdio.h>

float power (float k, int j)
{
	int p;
	if (j==0) return 1;
	else
	{
		if (j<0)
		{
			k=(1/k);
			j=-j;
		}
		float w=k;
		for (p=1;p<j;++p)
		{
			w=w*k;
		}
		return w;
	}
}

int main ()
{
	float x;
	int n;
	scanf("%f,%d",&x,&n);
	printf ("%f\n",power(x,n));
	return 0;
}
