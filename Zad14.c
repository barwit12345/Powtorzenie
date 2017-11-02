#include <stdio.h>
/* Float przerobiony na int-a jst podłogą */

int f (float a,float b)
{
	int j,k;
	j=(int)a;
	k=(int)b;
	a=a-j;
	b=b-k;
	return a==b?1:0; /* *warunek*?*jeśli tak*:*jeśli nie* *\
}
	
