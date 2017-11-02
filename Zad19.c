#include <stdio.h>

int a(int n)
{
	if (n<6) return n;
	else return (a(n-2)+a(n-4)+a(n-6));
}

int main ()
{
	int n;
	scanf ("%d",&n);
	printf ("%d",a(n));
	return 0;
}
