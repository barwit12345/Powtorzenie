#include <stdio.h>

int main ()
{
	float a,b,x,y,s;
	scanf ("%f,%f,%f,%f",&a,&b,&x,&y);
	s=((a-x)*(b-y));
	if (s<0) s=-s;
	printf ("%f",s);
	return 0;
}
