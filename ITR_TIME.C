
#include <stdio.h>
#include <process.h>
#include <time.h>

int linear(int a[], int n, int val)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] == val)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	time_t start, end;
	int a[20], n, index = -1, i, val;

	printf("\n enter the no of elements : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("\n enter the elements : ");
		scanf("%d", &a[i]);
	}
	printf("\n enter the element to be searched : ");
	scanf("%d", &val);
	start = time(NULL);
	for (i = 0; i < n; i++)
	{
		if (a[i] == val)
		{
			index = i;
		}
	}

	if (index == -1)
	{
		printf("\n element not found");
	}
	else
	{
		printf("\n element found at index %d and at position %d", index, index + 1);
	}
	end = time(NULL);
	printf("\nTime taken by the program is %.2f seconds", difftime(end, start));
	return (0);
}
