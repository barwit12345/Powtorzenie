#include <stdio.h>

int pierwsza (int a)
{
	if (a<=1) return 2; /*Dodatkowy warunek na rzecz oszczędności przy dużych liczbach*/
	int b,c=1;
	for (b=a;;++c)
	{
		if (c==((b/2)+1))
		{
			return b;
		}
		else if (b%c==0)
		{
			c=1;
			b++;
		}
	}
}

int main ()
{
	int x;
	scanf ("%d",&x);
	printf ("%d\n",pierwsza(x));
	return 0;
}
