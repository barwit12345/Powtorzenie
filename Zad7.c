#include <stdio.h>

void dzielne (int n,int m)
{
	int p;
	for (p=1;(m*p)<n;p++)
	{
		printf ("%d ", m*p);
	}
}

int main ()
{
	int n,m;
	scanf ("%d,%d",&n,&m);
	dzielne(n,m);
	return 0;
}
