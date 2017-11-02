#include <stdio.h>

int bank (float c, float p, float s)
{
	int n;
	for (n=0;c<s;n++)
	{
		c=(c*(1+p/100));
	}
	return n;
}

int main ()
{
	float c,p,s;
	scanf ("%f,%f,%f",&c,&p,&s);
	printf ("%d\n",bank(c,p,s));
	return 0;
}
