#include<stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    switch (age)
    {
    case 3 :
    printf("age is 3");
        break;
    case 13 :printf("age is 13");
        break;
    case 23 :printf("age is 23");
        break;
    default:
    printf("age is not 3 ,13 ,23");
        break;
    }
    return 0;
}
