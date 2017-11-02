#include <stdio.h>
/* int dzielony przez int daje podłogę */

funkcja (int x,int y)
{
	if (x==y) return x;
	else if (x>y) return (2*funkcja(x/y,y));
	else return (2*funkcja(x,y/x));
}

int main ()
{
	int a,b;
	scanf ("%d,%d",&a,&b);
	printf ("%d",funkcja(a,b));
	return 0;
}
