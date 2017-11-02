#include <stdio.h>

int funkcja(float n)
{
	int k;
	while ((k*k)<=n)
	{
		k++;
	}
	return k;
}

int main ()
{
	float a;
	scanf ("%f",&a);
	printf ("%f",funkcja(a));
	return 0;
}
