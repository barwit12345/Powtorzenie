#include <stdio.h>

float min (float a, float b)
{
	float c;
	c=a+b-max(a,b);
	return c;
}
