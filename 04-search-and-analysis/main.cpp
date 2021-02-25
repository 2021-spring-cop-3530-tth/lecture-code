int main ()
{
	int a = 12;
	int b = (12 + 127) / (347895 * 12);

	int n = 100;

	for (int i = 0; i < n; ++i) // not constant time as a whole
	{
		a += i; // constant time operation
	}

	return 0;
}
