#include <stdio.h>
int main()
{
    int a;
    int b=0;
    printf("enter the value of a");
    scanf("%d", &a);
    do
    {
        printf("%d\n",b);
        b=b+1;
    } while (b < a);
}
