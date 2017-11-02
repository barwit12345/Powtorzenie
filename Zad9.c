#include <stdio.h>

char troj (float a,float b,float c)
{
	float max;
	if (a>b && a>c) max=a;
	else if (b>a && b>c) max=b;
	else max=c;
	if ((a*a+b*b+c*c-max*max)==(max*max)) return 'T';
	else return 'N';
}

int main ()
{
	float a,b,c;
	scanf ("%f,%f,%f",&a,&b,&c);
	printf ("%c\n",troj(a,b,c));
	return 0;
}
