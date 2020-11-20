
#include <stdio.h>
#include <time.h>

int main()
{
	time_t start, end;
	start = time(NULL);
	int n, i, t1 = 0, t2 = 1, nextterm;
	printf("Enter how many elements you want to print:");
	scanf("%d", &n);
	printf("Fibonacci series: ");
	for (i = 1; i <= n; i++)
	{
		printf("%d,", t1);
		nextterm = t1 + t2;
		t1 = t2;
		t2 = nextterm;
	}
	end = time(NULL);
	printf("\nTime taken to print fibonacci series is %.2f seconds", difftime(end, start));
	return (0);
}