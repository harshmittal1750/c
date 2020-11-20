#include <stdio.h>
void main()
{
	int  a;
	int  b;
	int  c;
	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	c=a+b;
	printf("%d\n",c );
	if(a==b)
		{c=3*c;
		printf("%d\n",c );
		}
	 else
		{		printf("a and b is not equal\n");
		}
}