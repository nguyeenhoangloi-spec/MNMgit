    #include <stdio.h>
	void print_fib_less_than(long long n) 
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
		print_fib_less_than(n);
		return 0;
	}

