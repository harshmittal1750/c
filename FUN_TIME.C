#include <stdio.h>
#include <time.h>
void fun()
{
	int a;
	printf("fun() starts.\n");
	printf("Press enter to stop fun.\n");
	while (1)

		printf("fun() ends.\n");
}

int main()
{
	time_t start, end;

	start = time(NULL);
	fun();
	end = time(NULL);
	printf("\nTime taken by the program is %.2f seconds", difftime(end, start));
	return (0);
}