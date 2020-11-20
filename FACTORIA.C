#include <stdio.h>
#include <time.h>
int main()
{

	time_t start, end;
	start = time(NULL);
	int n, i, fact = 1;
	printf("Enter the number of which you want to find the factorial:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	printf("\nFactorial=%d", fact);
	end = time(NULL);
	printf("\nTime taken by the program is %.2f seconds", difftime(end, start));
	return (0);
}