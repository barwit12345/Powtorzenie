#include <stdio.h>
#include <math.h>

int main ()
{
	float x,y,cosine;
	scanf("%f,%f",&x,&y);
	cosine=(x/sqrt(x*x+y*y));
	printf ("%f",cosine);
	return 0;
}
