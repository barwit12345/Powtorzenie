#include <stdio.h>

int funkcja (int x,int y)
{
	if (y==0)
	{
		return x;
	}
	if (x==0)
	{
		return y;
	}
	return (funkcja(x-1,y)+funkcja(x,y-1));
}

int main ()
{
	int x,y;
	scanf ("%d,%d",&x,&y);
	printf ("%d",funkcja(x,y));
	return 0;
}
