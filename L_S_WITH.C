
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
void lsearch()
{
  time_t start, end;
  int a[20], n, index, i, val;
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
  index = linear(a, n, val);
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
}
int main()
{
  int ch;
  printf("\nHarsh\n2K19CSUN01082\nCSE-3B\n\n");
  do
  {
    printf("\n ++++MAIN MENU++++");
    printf("\n 1.Linear search");
    printf("\n 2.Exit");
    printf("\n Enter your choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      lsearch();
      break;
    case 2:
      exit(0);
      break;
    }
  } while (1);
  return (0);
}
