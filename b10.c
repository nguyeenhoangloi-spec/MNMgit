    #include <stdio.h>
	void fibonacci_nho(long long n) 
    {
		if (n <= 0) return;
		unsigned long long a = 0, b = 1;
		int first = 1;
		while (a < (unsigned long long)n) 
        {
			if (!first) putchar(' ');
			printf("%llu", a);
			first = 0;
			unsigned long long next = a + b;
			a = b;
			b = next;
		}
		putchar('\n');
	}

	int main(void) 
    {
		long long n;
		if (scanf("%lld", &n) != 1) 
        {
			return 1;
		}
		fibonacci_nho(n);
		return 0;
	}

