#include<stdio.h>
#include<process.h>

int stack[50],top=-1;

void push(int *value,int size)
{
    if(top>=size-1)
    {
	printf("\nOVERFLOW");
    }
    else
    {
	top++;
	stack[top]=*value;
    }
}

void pop()
{
    if(top<=-1)
    {
	printf("\nUNDERFLOW");
    }
    else
    {
	printf("\nDELETED ELEMENT is: %d",stack[top]);
	top--;
    }
}

void display()
{
    int i;
    if(top>=0)
    {
	for(i=top; i>=0; i--)
	{
	    printf("%d \t",stack[i]);
	}
    }
    else
    {
	printf("\nEMPTY STACK !");
    }
}

void main()
{
    int value,size,x;
  
    printf("\nEnter size of Stack: ");
    scanf("%d",&size);
    do{ 
	printf("\nSTACK USING ARRAY (PASS BY REFERENCE)");
	printf("\n 1.Push");
	printf("\n 2.Pop");
	printf("\n 3.Display");
	printf("\n 4.Exit");
	printf("\n\nEnter your Choice: ");
	scanf("%d",&x);
	switch(x)
	{
	    case 1:
	    printf("\nEnter the value : ");
	    scanf("%d",&value);
	    push(&value,size);
	    break;
	    case 2:
	    pop();
	    break;
	    case 3:
	    display();
            break;  
            case 4: 
            exit(0);
            break;
            default:
            printf ("Enter a Valid Choice");
        }
    }while(1);
}
