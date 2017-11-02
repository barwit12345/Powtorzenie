int pod (int n)
{
	int x;
	for (x=0;x*x*x<n;x++);
	return x;
}
