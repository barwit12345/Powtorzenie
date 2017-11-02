#include <stdio.h>

int f(int x)
{
	int y=0;
	do
	{
		int z=x%10;
		if (z%3==0)
		{
			y++;
		}
		x=x/10;
	}
	while (x>1);
	return y;
}

int main ()
{
	int a;
	scanf ("%d",&a);
	printf ("%d ",f(a));
	return 0;
}
