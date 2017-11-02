#include <stdio.h>
#include <math.h>

float dys (float a, float b, float x, float y)
{
	float d;
	d=((a-x)*(a-x)+(b-y)*(b-y));
	return sqrt(d);
}

int main ()
{
	float a,b,x,y;
	scanf ("%f,%f,%f,%f",&a,&b,&x,&y);
	printf ("%f\n",dys(a,b,x,y));
	return 0;
}
